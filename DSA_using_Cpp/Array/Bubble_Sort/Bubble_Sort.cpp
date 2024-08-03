#include<iostream>
#include<memory>


class BubbleSort
{
	private:
		std::unique_ptr<int[]> nums;
		int numsSize;

	public:
		BubbleSort(const int &numsSize=0)
		{
			if(numsSize<=0)
			{
				std::cout << "Invalid Input Array Size!!!" << std::endl;
				return; 
			}
			this->numsSize = numsSize;
			nums = std::make_unique<int[]>(this->numsSize);
		}
		BubbleSort(BubbleSort &other) = delete;


		void sort()
		{
			for(unsigned i=1; i<numsSize; ++i)
			{
				for(unsigned j=0; j<(numsSize-i); ++j)
				{
					if(nums[j] > nums[j+1])
					{
						swapping(nums[j], nums[j+1]);
					}
				}
			}
		}


		void swapping(int &a, int &b)
		{
			a^=b;
			b^=a;
			a^=b;
		}


		void accept()
		{
			for(unsigned i=0; i<numsSize; ++i)
			{
				std::cout << "Enter Data : " ;
				std::cin >> nums[i];
			}
			std::cout << std::endl;
		}
		void display() const
		{
			std::cout << "Array : " << std::endl;
			for(unsigned i=0; i<numsSize; ++i)
			{
				std::cout << nums[i] << " " ;
			}
			std::cout << std::endl;
		}

		int getNumsSize() const
		{
			return numsSize;
		}

};



int main()
{

	// std::unique_ptr<int> ptr = std::make_unique<int[]>(10);
	int n = 5;
	BubbleSort obj(n);

	obj.accept();
	obj.sort();
	obj.display();

	return 0;
}