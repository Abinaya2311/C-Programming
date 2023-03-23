#include<stdio.h>
#include<conio.h>
void largest(int arr[], int size)
{
    int max1 = arr[0];
    int max2 = arr[0];
    int i;
    for (i = 1; i < size; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }
    printf("The largest element is %d\n", max1);
    printf("The second largest element is %d\n", max2);
}

int main()
{
    int arr[] = {67, 75, 109, 37, 29};
    int size = sizeof(arr) / sizeof(arr[0]);   
    largest(arr, size);
    return 0;
}
