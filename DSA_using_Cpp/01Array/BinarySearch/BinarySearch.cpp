#include <iostream>
#include <memory>

template<class UserDataType>
class BinarySearch
{
	private :
		std::unique_ptr<UserDataType[]> arr;
		int arrSize;
		int lowerBound;
		int upperBound;
		int midIndex;
		UserDataType key;
	
	public :
		/*Direct className = 10 kela tr te object banta je ki aplyala hava nahiye -- explicit*/			/*const UserDataType &key = UserDataType()*/
		explicit BinarySearch( const int &arrSize = 0, const int &lowerBound=0, const int &upperBound=0, const UserDataType &key=0 ) : arrSize(arrSize), lowerBound(lowerBound), upperBound(upperBound), key(key)
		{
			if( arrSize <=0 )
			{
				std::cerr << "Invalid Input Array Size!!!" << std::endl;
	            this->arrSize = 0;
	            return;
			}
			arr = std::make_unique<UserDataType[]>(this->arrSize);
		}

		//  explicit BinarySearch(const int arrSize = 0, const int lowerBound = 0, const int upperBound = 0, const UserDataType &key = UserDataType()) : arrSize(arrSize), lowerBound(lowerBound), upperBound(upperBound), key(key)
	    // {
	    //     if (arrSize <= 0)
	    //     {
	    //         std::cerr << "Invalid Input Array Size!!!" << std::endl;
	    //         this->arrSize = 0;
	    //         return;
	    //     }
	    //     arr = std::make_unique<UserDataType[]>(this->arrSize);
	    // }



		BinarySearch(BinarySearch &other) = delete;


		int binarySearch()
		{
			while( lowerBound <= upperBound )
			{
				midIndex = (lowerBound+upperBound)/2;
				if( arr[midIndex] == key)
				{
					return midIndex;
				}
				else if( key < arr[midIndex] )
				{
					upperBound = midIndex-1;
				}
				else
				{
					lowerBound = midIndex+1;
				}
			}
			return -1;
		}

		void sort()
		{
			for(unsigned i=1; i<arrSize; ++i)
			{
				bool is_sorted = true;
				for(unsigned j=0; j<(arrSize-i); ++j)
				{
					if(arr[j] > arr[j+1])
					{
						is_sorted = false;
						swapping(arr[j], arr[j+1]);
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

		/*Requeried Methods*/

		void setLowerBound(const int lowerBound)
		{
			this->lowerBound = lowerBound;
		}
		void setUpperBound(const int upperBound)
		{
			this->upperBound = upperBound;
		}
		void setKey(const UserDataType key)
		{
			this->key = key;
		}

		int getArrSize() const
		{
			return arrSize;
		}


		void accept()
		{
			std::cout << std::endl;
			for(unsigned i=0; i<arrSize; ++i)
			{
				std::cout << "Enter Data : " ;
				std::cin >> arr[i];
			}
			std::cout << std::endl;
		}

		void display() const
		{
			std::cout << "Array : " << std::endl;
			for(unsigned i=0; i<arrSize; ++i)
			{
				std::cout << arr[i] << " " ;
			}
			std::cout << std::endl;
		}	



		~BinarySearch(){}	
};




int main()
{

	int n = 5;
	int key = 0;


	std::cout << "How Many Elements : ";
	std::cin >> n;

	
	BinarySearch <int>obj {n, 0, n-1, key};
	obj.accept();

	obj.sort();

	obj.display();

	std::cout << "\nEnter Key to Search: ";
	std::cin >> key;
	obj.setKey(key);
	std::cout << "Index : " << obj.binarySearch() << std::endl;


	return 0;
}