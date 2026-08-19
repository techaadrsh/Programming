#include<iostream>
#include<vector>
using namespace std;
void insertion_sort(vector<int>& nums)
{
    
    for(int i=1; i<nums.size(); i++)
    {
      int j=i-1;
      int key=nums[i];
      while(j>=0 && nums[j]>=key)
      { 
       nums[j+1]=nums[j];
       j--;
      }
      j++;
      nums[j]=key;
    }
}
int main()
{
    vector<int> nums={43,42,12,23,34,12};
    insertion_sort(nums);
    for(auto ele:nums)
    {
        cout<<ele<<" ";
    }
    return 0;
}