#include <iostream>
#include <vector>

template <typename T>
class MergeSort {
private:
    std::vector<T> array;

    // Helper function to merge two sorted sub-arrays
    void merge(int lowerBound, int mid, int upperBound) {
        std::vector<T> temp(array.size());

        int i=lowerBound;
        int j = mid+1;
        int k = lowerBound;

        while(i <= mid && j <= upperBound)
        {
        	if(array[i] < array[j])
        	{
        		temp[k++] = array[i++];
        	}
        	else
        	{
        		temp[k++] = array[j++];
        	}
        }

        while(i <= mid) temp[k++] = array[i++];
	    while(j <= upperBound) temp[k++] = array[j++];

	    for(k=lowerBound; k<=upperBound; ++k)
	    {
	    	array[k] = temp[k];
	    }
    }




    // Recursive function to implement Merge Sort
    void mergeSort(int lowerBound, int upperBound) {
        if (lowerBound < upperBound) {
            int mid = (lowerBound + upperBound ) / 2;

            // Sort first and second halves
            mergeSort(lowerBound, mid);
            mergeSort(mid + 1, upperBound);

            // Merge the sorted halves
            merge(lowerBound, mid, upperBound);
        }
    }

public:
    // Constructor to initialize the array
    MergeSort(const std::vector<T>& inputArray) : array(inputArray) {}

    // Function to sort the array
    void sort() {
        mergeSort(0, array.size() - 1);
    }

    // Function to display the array
    void display() const {
        for (const auto& element : array)
            std::cout << element << " ";
        std::cout << std::endl;
    }
};





/*This Function is usefull when we have different data types for sorting */
template<typename T>
void handleSorting(int n)
{
    std::vector<T> vec(n);
    for (int i = 0; i < n; ++i) 
    {
    	std::cout << "Enter Data : ";
        std::cin >> vec[i];
    }
    MergeSort<T> sorter(vec);
    sorter.sort();
    sorter.display();
}


int main()
{
	int n = 0;
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






// int main() {
//     int n, option;

//     std::cout << "What Type of Data You Want To Sort:\n\t1. Integer\t2. Float\t3. String\nEnter Option (1, 2, 3): ";
//     std::cin >> option;

//     std::cout << "How Many Elements You Want to Enter: ";
//     std::cin >> n;

//     switch (option) {
//         case 1: {
//             std::vector<int> vec(n);
//             std::cout << "Enter " << n << " integers:\n";
//             for (int i = 0; i < n; ++i) {
//                 std::cin >> vec[i];
//             }
//             MergeSort<int> sorter(vec);
//             sorter.sort();
//             sorter.display();
//             break;
//         }
//         case 2: {
//             std::vector<float> vec(n);
//             std::cout << "Enter " << n << " floats:\n";
//             for (int i = 0; i < n; ++i) {
//                 std::cin >> vec[i];
//             }
//             MergeSort<float> sorter(vec);
//             sorter.sort();
//             sorter.display();
//             break;
//         }
//         case 3: {
//             std::vector<std::string> vec(n);
//             std::cout << "Enter " << n << " strings:\n";
//             for (int i = 0; i < n; ++i) {
//                 std::cin >> vec[i];
//             }
//             MergeSort<std::string> sorter(vec);
//             sorter.sort();
//             sorter.display();
//             break;
//         }
//         default:
//             std::cout << "Enter a valid option!" << std::endl;
//             break;
//     }

//     return 0;
// }
