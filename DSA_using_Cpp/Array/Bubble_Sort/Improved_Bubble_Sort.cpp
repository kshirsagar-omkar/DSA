#include<iostream>
#include<memory>
#include<string>

template<class UserDataType>
class ImprovedBubbleSort
{
	private:
		std::unique_ptr<UserDataType[]> nums;
		int numsSize;

	public:
		ImprovedBubbleSort(const int &numsSize=0)
		{
			if(numsSize<=0)
			{
				std::cout << "Invalid Input Array Size!!!" << std::endl;
				return; 
			}
			this->numsSize = numsSize;
			nums = std::make_unique<UserDataType[]>(this->numsSize);
		}
		ImprovedBubbleSort(ImprovedBubbleSort &other) = delete;


		void sort()
		{
			for(unsigned i=1; i<numsSize; ++i)
			{
				bool is_sorted = true;
				for(unsigned j=0; j<(numsSize-i); ++j)
				{
					if(nums[j] > nums[j+1])
					{
						is_sorted = false;
						swapping(nums[j], nums[j+1]);
					}
				}
				if(is_sorted) break;
			}
		}


		void swapping(UserDataType &a, UserDataType &b)
		{
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

/*This Function is usefull when we have different data types for sorting */
template<typename T>
void handleSorting(int n)
{
    ImprovedBubbleSort<T> obj(n);
    obj.accept();
    obj.sort();
    obj.display();
}



int main()
{

	// std::unique_ptr<int> ptr = std::make_unique<int[]>(10);
	int n = 5;
	int option;
	
	std::cout << "What Type of Data You Want To Sort : \t1.Intiger\t2.Float\t\t3.string\nEnter Option(1,2,3) : ";
	std::cin >> option;

	std::cout << "How Many Elements You Want to Enter : ";
	std::cin >> n;

	switch (option)
    {
    case 1:
        handleSorting<int>(n);
        break;
    case 2:
        handleSorting<float>(n);
        break;
    case 3:
        handleSorting<std::string>(n);
        break;
    default:
        std::cout << "Enter Valid Option!!" << std::endl;
        break;
    }


	return 0;
}