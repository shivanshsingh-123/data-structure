 #include <stdio.h>
 int linearsearch (int arr[], int size, int element )
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==element){
        return i;
    }
}
  return -1;
}

int main()
{
int arr[] = {35,23,5,6,4,64,677,875,75,97,57,};
int size = sizeof(arr)/sizeof(int);
int element = 45;
int searchindex = linearsearch(arr,size,element);
printf("The Element %d was found at Index %d\n",element,searchindex);

return 0;
}