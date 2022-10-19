// C++ program for Merge Sort
#include <iostream>
#include <ctime>
#include <omp.h>
using namespace std;


// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]


/* can't convert it to parallel */
void merge(int array[], int const left, int const mid, int const right)
{
	auto const subArrayOne = mid - left + 1;
	auto const subArrayTwo = right - mid;

	// Create temp arrays
	auto *leftArray = new int[subArrayOne],
		*rightArray = new int[subArrayTwo];

	// Copy data to temp arrays leftArray[] and rightArray[]
	for (auto i = 0; i < subArrayOne; i++)
		leftArray[i] = array[left + i];
	for (auto j = 0; j < subArrayTwo; j++)
		rightArray[j] = array[mid + 1 + j];

	auto indexOfSubArrayOne = 0, // Initial index of first sub-array
		indexOfSubArrayTwo = 0; // Initial index of second sub-array
	int indexOfMergedArray = left; // Initial index of merged array

	// Merge the temp arrays back into array[left..right]
	while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
		if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
			array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
			indexOfSubArrayOne++;
		}
		else {
			array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
			indexOfSubArrayTwo++;
		}
		indexOfMergedArray++;
	}
	// Copy the remaining elements of
	// left[], if there are any
	while (indexOfSubArrayOne < subArrayOne) {
		array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
		indexOfSubArrayOne++;
		indexOfMergedArray++;
	}
	// Copy the remaining elements of
	// right[], if there are any
	while (indexOfSubArrayTwo < subArrayTwo) {
		array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
		indexOfSubArrayTwo++;
		indexOfMergedArray++;
	}
}


void serialMerge(int array[], int const begin, int const end)
{

    if (begin >= end)
		return; // Returns recursively

	auto mid = begin + (end - begin) / 2;

	serialMerge(array, begin, mid);

	serialMerge(array, mid + 1, end);

	merge(array, begin, mid, end);
}

// begin is for left index and end is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int array[], int const begin, int const end)
{
    if(end-begin <= 2)
    {
        serialMerge(array,begin,end);
        return;
    }
	if (begin >= end)
		return; // Returns recursively

	auto mid = begin + (end - begin) / 2;

	#pragma omp task
	mergeSort(array, begin, mid);
    #pragma omp task
	mergeSort(array, mid + 1, end);
	#pragma omp taskwait  //wait until the two tasks finish
	merge(array, begin, mid, end);

}

// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
{
	for (auto i = 0; i < size; i++)
		cout << A[i] << " ";
}



// Driver code
int main()
{
    for (int  t = 1 ; t<=8;t++){
    int n = 399999;
    omp_set_num_threads(t);
    cout<<"num of threads : "<<t<<endl;
    clock_t start, stop;


	int arr[n];
	srand(1);
	//generate random array
	for(int i=0;i<n;i++)
      arr[i]=rand()%n;
	auto arr_size = sizeof(arr) / sizeof(arr[0]);

	//cout << "Given array is \n";
	//printArray(arr, arr_size);

    if(t==1){
            start = clock();
        serialMerge(arr, 0, arr_size - 1);
         stop = clock();
    }
    else{
        start = clock();
    #pragma omp parallel // if there are 4 thread it will run 4 time so use single to run one time
    {
        #pragma omp single
        mergeSort(arr, 0, arr_size - 1);
    }
    stop = clock();
    }

	//cout << "\nSorted array is \n";
	//printArray(arr, arr_size);
	cout<<"time in parallel is : "<<(float)(stop-start)/CLOCKS_PER_SEC << " seconds" << endl;
    }
	return 0;
}

// This code is contributed by Mayank Tyagi
// This code was revised by Joshua Estes
