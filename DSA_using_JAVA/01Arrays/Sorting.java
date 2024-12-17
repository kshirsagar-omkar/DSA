import java.io.*;
import java.util.Arrays;


public class Sorting
{
	public static void main(String []args) throws Exception
	{
		System.out.println("\n");
		BufferedReader br = new BufferedReader( new InputStreamReader( System.in ) );

		System.out.print("How Many Elements : ");
		int n = Integer.parseInt( br.readLine() );


		int arr[] = new int[n];
		

		// accept(arr, br);
		// bubbleSort(arr);
		// System.out.println("bubbleSort : " + Arrays.toString( arr ) + "\n\n");


		// accept(arr, br);
		// insertionSort(arr);
		// System.out.println("insertionSort : " + Arrays.toString( arr ) + "\n\n");

		// accept(arr, br);
		// selectionSort(arr);
		// System.out.println("selectionSort : " + Arrays.toString( arr ) + "\n\n");


		accept(arr, br);
		mergeSort(arr, 0, arr.length-1);
		System.out.println("mergeSort : " + Arrays.toString( arr ) + "\n\n");

		System.out.println("\n");
	}

	

	static void bubbleSort(int a[])
	{
		for(int i = a.length-1; i>0; --i)
		{
			boolean flag = true;
			for(int j=0; j<i; ++j)
			{
				if(a[j] > a[j+1])
				{
					//Swap
					flag = false;
					int tempMem = a[j];
					a[j] = a[j+1];
					a[j+1] = tempMem;
				}
			}
			if(flag == true) break;
		}
	}


	static void insertionSort(int a[])
	{
		for(int i=1; i<a.length; ++i)
		{
			int tempMem = a[i];
			int j = 0;
			for(j = i-1; j>=0; --j)
			{
				if(a[j] > tempMem)
				{
					a[j+1] = a[j];
				}
				else break;
			}
			a[j+1] = tempMem;
		}
	}


	static void selectionSort(int a[])
	{
		for(int i=0; i<a.length; ++i)
		{
			for(int j = i+1; j<a.length; ++j)
			{
				if(a[i] > a[j])
				{
					//Swap
					int tempMem = a[i];
					a[i] = a[j];
					a[j] = tempMem;
				}
			}
		}
	} 


	static void mergeSort(int arr[], int lb, int ub)
	{
		if(lb < ub)
		{
			int mid = (lb+ub)/2;
			mergeSort(arr, lb, mid);
			mergeSort(arr, mid+1, ub);
			merge(arr, lb, mid, ub);
		}
	}
	static void merge(int arr[], int lb, int mid, int ub)
	{
		int n1 = mid - lb +1;
		int n2 = ub - mid;

		int left[] = new int[n1];
		int right[] = new int[n2];

		for(int i=0; i<n1; ++i)
		{
			left[i] = arr[lb+i];
		}
		for(int i=0; i<n2; ++i)
		{
			right[i] = arr[mid + 1 + i];
		}

		int i = 0;
		int j = 0;
		int k = lb;

		while(i < n1 && j < n2)
		{
			if( left[i] < right[j] )
			{
				arr[k++] = left[i++];
			}
			else
			{
				arr[k++] = right[j++];
			}
		}

		while(i<n1)
		{
			arr[k++] = left[i++];
		}
		while(j<n2)
		{
			arr[k++] = right[j++];
		}
	}






	static void accept(int arr[], BufferedReader br) throws Exception
	{
		for(int i=0; i<arr.length; ++i)
		{
			System.out.print("Enter Data : ");
			arr[i] = Integer.parseInt( br.readLine() );
		}
	}
} 