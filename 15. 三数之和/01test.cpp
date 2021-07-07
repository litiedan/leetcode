#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
// 遍历所有可能，将答案存入set容器去重，再存入vector中
// 能运行通，但是在LeetCode又因为遍历原因超出时间限制
void print02(int val)
{
    cout<<val<<" ";
}
void print01(vector<int> val)
{
    for_each(val.begin(),val.end(),print02);
    cout<<endl;
}
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<int> vec;
        set<vector<int>> setvec;
        vector<vector<int>> doubelvec;
        if(nums.size()<3)
        {
            return doubelvec;
        }
        for(int i = 0;i<nums.size()-2;i++)
        {   
            for(int j =i+1;j<nums.size()-1;j++)
            {  
                for(int k = j+1;k<nums.size();k++)
                {
                    // cout<<nums[i]<<"    "<<nums[j]<<"   "<<nums[k]<<endl;
                    int sum_ijk = nums[i]+nums[j]+nums[k];
                    if(sum_ijk == 0)
                    {
                        vec.push_back(nums[i]);
                        vec.push_back(nums[j]);
                        vec.push_back(nums[k]);
                        sort(vec.begin(),vec.end());
                        setvec.insert(vec);
                        vec.clear();
                    }
                }
            }
        }
        set<vector<int>>::iterator svit=setvec.begin();
        for(svit;svit!=setvec.end();svit++)
        {
            doubelvec.push_back(*svit);
        }
        return doubelvec;
    }
};
int main()
{
    Solution s;
    vector<int> v;
    // [-1,0,1,2,-1,-4]
    // v.push_back(-1);
    v.push_back(0);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(-1);
    // v.push_back(-4);
    vector<vector<int>>result =  s.threeSum(v);
    for_each(result.begin(),result.end(),print01);
    return 0;   
}