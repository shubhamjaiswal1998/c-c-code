#include <stdio.h>
#include <stdlib.h>
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than current
        // to one position ahead of their current position
        while (j >= 0 && current < arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = current;
    }
}
int partition(int arr[], int start, int end)
{

    int pivot = arr[start]; 

    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }
    // Giving pivot element its correct position
    int pivotIndex = start + count;
    // swap(arr[pivotIndex], arr[start]);
    int t = arr[pivotIndex];
    arr[pivotIndex] = arr[start];
    arr[start] = t;
    // Sorting left and right parts of the pivot element
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

       if (i < pivotIndex && j > pivotIndex)
        {
            // swap(arr[i++], arr[j--]);
            int t1 = arr[i];
            arr[i] = arr[j];
            arr[j] = t1;
            i++;
            j--;
        }
    }

    return pivotIndex;
}

// Function to perform quicksort on the array
// 7,8,3,1,2,4,6
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // Partitioning index
        int pivotIndex = partition(arr, low, high);

        // Recursively sort elements before and after the pivot
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

// ///////////////////////////////////////////////////////////////////////////
int binarySearch(int arr[], int low, int high, int target)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // Check if target is present at the middle
        if (arr[mid] == target)
        {
            return mid;
        }
        // If target is greater, ignore the left half
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        // If target is smaller, ignore the right half
        else
        {
            high = mid - 1;
        }
    }

    // If target is not present in the array
    return -1;
}
//  //////////////////////////////////////////////////////////////////////////
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // Find the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                // Set minIndex to the index of the smallest element found so far
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element in the unsorted part
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
/*
Sorting Algorithm	Worst Case Time Complexity	Best Case Time Complexity	Stability
Bubble Sort	              O(n^2)	             O(n)	                     Stable
Insertion Sort	          O(n^2)	             O(n)	                     Stable
Selection Sort	          O(n^2)	             O(n^2)	                     Not Stable
Merge Sort	              O(n log n)	         O(n log n)	                 Stable
Quick Sort	              O(n^2) (unoptimized)	 O(n log n)	                 Not Stable
*/
void bubbleSort(int arr[], int n)
{
    int flag;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0; // Initialize flag for each pass

        for (int j = 0; j < n - i - 1; j++)
        {
            // If the element found is greater than the next element, swap them
            if (arr[j] > arr[j + 1])
            {
                // Swap without using a separate function
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                flag = 1; // Set flag to indicate a swap occurred
            }
        }
        // If no swaps were made in the entire pass, the array is already sorted
        if (flag == 0)
        {
            break;
        }
    }
}
// ////////////////////////////////////////////////////////////////////////
void merge(int arr[], int left, int mid, int right)
{
    // int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    // Create temporary arrays
    int L[n1], R[n2];
    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[mid + 1 + j];
    }
    // Merge the temporary arrays back into arr[left..right]
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = R[j++];
        }
    }
    // Copy the remaining elements of L[], if there are any
    while (i < n1)
    {
        arr[k++] = L[i++];
    }
    // Copy the remaining elements of R[], if there are any
    while (j < n2)
    {
        arr[k++] = R[j++];
    }
}
void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        // Same as (left+right)/2, but avoids overflow for large left and right
        int mid = left + (right - left) / 2;
        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

int main()
{
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    for (int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    quickSort(arr, 0, arr_size - 1);

    printf("Sorted array is \n");
    for (int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
