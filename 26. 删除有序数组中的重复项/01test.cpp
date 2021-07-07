#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
// 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = 0;
        if(nums.empty())
        {
            return n;
        }
        for(vector<int>::iterator it = nums.begin();it!=nums.end()-1;it++)
        {
            cout<<*(it)<<" "<<*(it+1)<<endl;;
            if(*(it)==*(it+1))
            {
                nums.erase(it);//参数是迭代器，表示删除迭代器位置的数据
                it--;
            }
        }
        return nums.size();
    }
};
void print01(int val)
{
    cout<<val<<" ";
}
int main()
{
    Solution s;
    vector<int> v;
    // [-1,0,1,2,-1,-4]
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    v.push_back(4);
    int result =  s.removeDuplicates(v);
    cout<<result<<endl;
    for_each(v.begin(),v.end(),print01);
    cout<<endl;
    return 0;   
}