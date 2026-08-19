#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& num,int start,int end)
{
    int idx=start-1;
    int pivot=num[end];
    for(int j=start; j<end; j++)
    {
        if(num[j]<=pivot)
        {
            idx++;
            swap(num[idx],num[j]);
        }
    }
    idx++;
    swap(num[idx],num[end]);
    return idx;

}
void quickSort(vector<int>& num,int start,int end)
{
   if(start<end)
   {
    int pivot=partition(num,start,end);
    quickSort(num,start,pivot-1);
    quickSort(num,pivot+1,end);
   }
}
int main()
{
    vector<int> num={12,32,35,8,32,17};
    int start=0;
    int end=num.size()-1;
    quickSort(num,start,end);
    for(auto ele:num)
    {
        cout<<ele<<" ";
    }
    return 0;
}