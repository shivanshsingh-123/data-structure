#include<stdio.h>

void display (int arr[],int n)
{
    for (int i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
}
}

int main()
{
    int arr[10] = {45,18,7};
    display(arr,3);

    return 0;
}