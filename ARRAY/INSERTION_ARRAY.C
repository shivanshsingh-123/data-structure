#include<stdio.h>

void display (int arr[],int n)
{

for(int i=0;i<n;i++)

{
    printf("%d ",arr[i]);
}
    printf("\n");
}

int indinsertion (int arr[], int size, int element, int capacity, int index)

  {
    if(size>=capacity)
    {
        return -1;
    }

    for(int i = size-1; i>=index; i--)
   {
    arr[i+1] = arr[i]; 
   }
    arr[index] = element;
    return 1; 
   
}
  

  int main()
  {
   int arr[10] = {12,16,25,36,52,65,72};

  int size=7, index=4, element=45;

 display (arr,size);

  indinsertion( arr,size, element, 10, index);
   
  size += 1 ;
    display (arr,size);

   return 0;
}

