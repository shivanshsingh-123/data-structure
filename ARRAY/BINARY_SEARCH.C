#include <stdio.h>
int binarysearch(int arr[],int size,int element)

{
    for( int i=0;i<size;i++)
    {
        if(arr[i]=element){
        return i;
    }
}

    return -1;
}



    int low, int mid, int high;
    low = 0;
    high = size-1;

while(low<=high)
{
    mid=(low+high)/2;
    if(arr[mid]==element)
    return mid
}
  else if (mid<element){
    low=mid+1;
  }
  else {
    high = mid-1;
  }



int main()
{
    int arr[]={8,12,23,45,67,89,90,123};
    int size = sizeof(arr) /sizeof(int);
    int element = 89;
    int searchidex = binarysearch(arr,size,element);
    printf("the %d is found at the index of %d",element,searchindex);

    return 0;
}