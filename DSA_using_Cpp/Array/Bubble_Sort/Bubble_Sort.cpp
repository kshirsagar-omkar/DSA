#include<iostream>
#include<memory>
#include<string>

template<class UserDataType>
class BubbleSort
{
	private:
		std::unique_ptr<UserDataType[]> nums;
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
			nums = std::make_unique<UserDataType[]>(this->numsSize);
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


		void swapping(UserDataType &a, UserDataType &b)
		{
			// a^=b;
			// b^=a;
			// a^=b;
			UserDataType temp = a;
			a = b;
			b = temp;

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
	int option;
	
	std::cout << "What Type of Data You Want To Sort : \t1.Intiger\t2.Float\t\t3.string\nEnter Option(1,2,3) : ";
	std::cin >> option;

	std::cout << "How Many Elements You Want to Enter : ";
	std::cin >> n;

	if(option==1)
	{
		BubbleSort <int>obj(n);
		obj.accept();
		obj.sort();
		obj.display();
	}
	else if(option==2)
	{
		BubbleSort <float>obj(n);
		obj.accept();
		obj.sort();
		obj.display();
	}
	else if(option==3)
	{
		BubbleSort <std::string>obj(n);
		obj.accept();
		obj.sort();
		obj.display();
	}
	else
	{
		std::cout << "Enter Valid Option!!" << std::endl;
	}


	return 0;
}