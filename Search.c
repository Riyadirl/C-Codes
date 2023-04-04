#include<stdio.h>
#include<stdbool.h>

int binarySearch(int arr[], int low, int high, int key)
{
    if(low>high)
        return -1;
    int mid = (low + high)/2;
    if(arr[mid]==key)
        return mid;
    else if(arr[mid]<key)
        return binarySearch(arr, mid+1, high, key);
    else
        return binarySearch(arr, low, mid-1, key);
}

int binarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (low + high)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int linearSearch(int arr[], int n, int key)
{
    for(int i=0; i<=n-1; i++)
    {
        if(arr[i]==key)
            return i;
    }
    return -1;
}

int main()
{
    int n = 9;
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int key = 9;
    int result = binarySearch(arr, n, key);
    printf("%d\n",result);
    return 0;
}
