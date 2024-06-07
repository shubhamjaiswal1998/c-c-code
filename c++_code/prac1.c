#include <stdio.h>
int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int c = 0;
    for (int i = l + 1; i <h; i++)
    {
        if (arr[i] < pivot)
        {
            c = c + 1;
        }
    }
    int p_index = l + c;
    // swap
    int t = arr[l];
    arr[l] = arr[p_index];
    arr[p_index] = t;
    int i = l;
    int j = h;
    while (i < p_index && j > p_index)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < p_index && j > p_index)
        {
            int t1 = arr[i];
            arr[i] = arr[j];
            arr[j] = t1;
        }
    }
    return p_index;
}
void quick_Sort(int arr[], int l, int h)
{

    if (l < h)
    {
        int p = partition(arr, l, h);
        quick_Sort(arr, 0, p - 1);
        quick_Sort(arr, p + 1, h);
    }
}
void main()
{

    int arr[] = {3, 0, 69, 5, 99,1};
    int n1 = 6;
    quick_Sort(arr, 0, n1);
    for (int i = 0; i < n1; i++)
    {
        printf("%d%s", arr[i], " ");
    }

    return;
}