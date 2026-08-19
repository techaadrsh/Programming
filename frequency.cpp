#include<iostream>
using namespace std;
#include<vector>
#include<map>
void findFreq(string str)
{
    map<char,int>mp;
    bool found=false;
    vector<int> freq(26,0);
    for(auto ele:str)
    {
        mp[ele]++;
    }
    cout<<"{";
    for(auto ele:str)
    {
        if(freq[ele-'a']==0)
        {
            if(found)
            cout<<",";
            cout<<ele<<"->"<<mp[ele];
            freq[ele-'a']++;
        }
    

        found=true;
    }
    cout<<"}";
    // for(int i=0; i<str.length(); i++)
    // {

    // }

}
int main()
{
    string str="programming";
    findFreq(str);
    return 0;
}