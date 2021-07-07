#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printvector(vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
}
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index;
        bool inrange = false;
        int i=0;
        for(vector<int>::iterator it = nums.begin();it!=nums.end();it++,i++)
        {
             if(*it==target)
            {  
                index= i;
                inrange = true;
                break;
            }
            else if(*it>target)
            {  
                nums.insert(it,target);
                index =  i;
                inrange = true;
                break;
            }
        }
        if(inrange)
        {
             printvector(nums);
            cout<<"#########"<<endl;
            return index;
        }
        else
        {
            nums.push_back(target);
             printvector(nums);
            cout<<"#########"<<endl;
            return nums.size()-1;
        }
        // nums.push_back(target);

        // cout<<index<<endl;

        
    }
};



int main()
{
    Solution Sol;
    vector<int> v;
    int target = 99;
    for(int i = 0;i<10;i+=2)
    {
        v.push_back(i);
    }
    printvector(v);
    cout<<"#########"<<endl;
    Sol.searchInsert(v,target);
    int result = Sol.searchInsert(v,target);
    cout<<result<<endl;
    return 0;
}