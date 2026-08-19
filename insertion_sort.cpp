#include<iostream>
using namespace std;
void selection_sort(int arr[],int size)
{

    for(int i=1; i<size-1; i++)
    {
        int j=i-1;
      int key=arr[i];
      while(j>=0 && arr[j]>key)
      {
        arr[j+1]=arr[j];
        j--;
      }
      arr[j+1]=key;
    }
    
}
int main()
{
  int arr[]={4,5,6,3,2,3};
  int size=sizeof(arr)/sizeof(arr[0]);
  selection_sort(arr,size);
  for(int i=0; i<size; i++)
    {
        cout<<arr[i]<>
    }
}