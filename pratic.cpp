#include<iostream>
using namespace std;

void make_int(int A[],int no)
{
    int n=1;
    int BASE=10;
    int i=0;
    while(no)
    {
        A[i++]=no%BASE;
        no/=BASE;
    }
    while(i<n)
    {
        A[i++]=0;
    }
    for(int i=0; i<n; i++)
    {
      cout<<A[i];
    }
}
int main()
{
    int arr[5]={1};
    int n=5;
    make_int(arr,n);
    

    return 0;

}