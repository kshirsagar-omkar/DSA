#include <iostream>
#include <string>
#include <memory>


template <class UserDataType>
class Insertion_Sort
{
	private:
		std::unique_ptr<UserDataType[]> nums;
		int numsSize;
	public:
		Insertion_Sort(const int &numsSize=0)
		{
			if(numsSize < 0)
			{
				std::cout << "Invalid Array Size!!!" << std::endl;
			}
			else
			{
				this->numsSize = numsSize;
				nums = std::make_unique<UserDataType[]>(this->numsSize);
			}
		}
		Insertion_Sort(Insertion_Sort &Other) = delete;

		void sort()
		{
			for(unsigned i=1; i<numsSize; ++i)
			{
				UserDataType temp_memory = nums[i];
				int j=0;
				for(j=i-1; j>=0; --j)
				{
					if(nums[j] > temp_memory)
					{
						nums[j+1] = nums[j];
					}
					else break;
				}
				nums[j+1] = temp_memory;
			}
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
    Insertion_Sort<T> obj(n);
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