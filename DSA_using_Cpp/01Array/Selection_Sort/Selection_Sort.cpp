#include <iostream>
#include <memory>
// #include <iostream>


template<class UserDataType>
class SelectionSort
{
	private:
		std::unique_ptr<UserDataType[]> nums;
		int numsSize;

	public:
		SelectionSort(const int &numsSize=0)
		{
			if(numsSize<=0)
			{
				std::cout << "Invalid Input Array Size!!!" << std::endl;
				return; 
			}
			this->numsSize = numsSize;
			nums = std::make_unique<UserDataType[]>(this->numsSize);
		}
		SelectionSort(SelectionSort &other) = delete;


		void sort()
		{
			for(size_t i=0; i<numsSize-1; ++i)
			{
				for(size_t j=i+1; j<numsSize; ++j)
				{
					if(nums[i] > nums[j])
					{
						swapping(nums[i], nums[j]);
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


/*This Function is usefull when we have different data types for sorting */
template<typename T>
void handleSorting(int n)
{
    SelectionSort<T> obj(n);
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