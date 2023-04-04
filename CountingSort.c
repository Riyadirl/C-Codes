#include<stdio.h>
int maxElement(int arr[], int n)
{
    int maximum = arr[0];
    for(int i=1; i<n; i++)
    {
        if(maximum<arr[i])
            maximum = arr[i];
    }
    return maximum;
}
void countingSort(int arr[], int n)
{
    int maximum = maxElement(arr, n);
    int extraMemory[maximum+1] = {0};
    for(int i=0; i<n; i++)
    {
        int value = arr[i];
        extraMemory[value] += 1;
    }

    int indicatingPointer = 0;

    for(int i=0;i<=maximum;i++)
    {
        if(extraMemory[i]==0) continue;
        for(int j=1;j<=extraMemory[i];j++)
        {
            arr[indicatingPointer] = i;
            indicatingPointer++;
        }
    }
}

int main()
{
    int arr[10] = {6, 2, 3, 4, 5, 4, 4, 2, 1, 1};
    int n = 10;
    countingSort(arr, n);
    for(int i=0; i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}