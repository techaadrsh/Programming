#include<iostream>
using namespace std;
//binary search using function 
bool binary_search(int arr[],int size,int target)
{
    int low=0;
    bool found=false;
    int high=size-1;
    while(low<=high)
    {
       int mid=low+(high-low)/2;
       //
       if(arr[mid]==target)
       {
          return true;
       }
       else if(arr[mid]<target)
       {
        low=mid+1;
       }
       else
       {
        high=mid-1;
       }
    }
    return found;
}
// binary_search using recursion
bool binary_search(int arr[],int size,int target,int low,int high)
{
    int mid=low+high/2;
    if(low>high)
    {
        return false;
    }
    if(arr[mid]==target)
    { 
        return true;
    }
    else if(arr[mid]<target)
    {
        binary_search(arr,size,target,low+1,high);
    }
    else
    {
        binary_search(arr,size,target,low,high-1);
    }
}

int main()
{
    int arr[]={2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int target=4;
    int low=0;
    int high=1;
    //binary search using for loop
    for(int i=low; i<high; i++)
    {
       int low=0;
       int mid=low+high/2;
       if(arr[mid]==target)
       {
         cout<<"true";
         break;
       }
       else if(arr[mid]<target)
       {
        if(size>high)
        {
            high=high*2;
        }
        else
        {
            cout<<"false";
            break;
        }
       }
       else
       { 
        low=mid+1;
       }
    }
    return 0;
}