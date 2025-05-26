// #include<stdio.h>
// #include<stdlib.h>

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// // Partition using the first element as pivot
// int partition(int arr[], int low, int high)
// {
//     int pivot = arr[low];
//     int i = low + 1;
//     int j = high;

//     while(i <= j)
//     {
//         while(i <= high && arr[i] <= pivot)
//         {
//             i++;
//         }
//         while(j >= low && arr[j] > pivot)
//         {
//             j--;
//         }
//         if(i < j)
//         {
//             swap(&arr[i], &arr[j]);
//         }
//     }
//     swap(&arr[low], &arr[j]);  // Place pivot in the correct position
//     return j;  // Return pivot index
// }

// void quickSort(int arr[], int low, int high)
// {
//     if(low < high)
//     {
//         int partitionIndex = partition(arr, low, high);
//         quickSort(arr, low, partitionIndex - 1);
//         quickSort(arr, partitionIndex + 1, high);
//     }
// }

// int main()
// {
//     int arr[5] = {4, 3, 5, 2, 1};
//     quickSort(arr, 0, 4);

//     printf("Sorted array:\n");
//     for(int i = 0; i < 5; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[], int low ,int high)
{
    int pivot=arr[low];
    int i=low+1;
    int j=high;

    while (i<=j)
    {
        while (i<=high && arr[i] <=pivot)
        {
            i++;
        }
        while (j>=low && arr[j]>pivot)
        {
            j--;
        }
        if (i<j)
        {
            swap(&arr[i],&arr[j]);
        }
        
        
    }

    swap(&arr[low],&arr[j]);
    
    return j;
}
void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}
int main()
{
    int arr[5] = {4, 3, 5, 2, 1};
    quickSort(arr, 0, 4);

    printf("Sorted array:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;

}
