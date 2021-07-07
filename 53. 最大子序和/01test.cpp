#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
// 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        int premaxsum = nums[0];
        int result  = premaxsum;
        for(int i=1;i<nums.size();i++)
        {
            if(premaxsum>0)
            {
                premaxsum  = premaxsum + nums[i];
            }
            else
            {
                premaxsum = max(premaxsum,nums[i]);
            }
            result = max(result,premaxsum);
        }
        return result;
    }
};
// 输入：nums = [-2,1,-3,4,-1,2,1,-5,4]
int main()
{
    Solution s;

    vector<int> v;
    v.push_back(1);
    v.push_back(-1);
    v.push_back(-2);
    // v.push_back(1);
    // v.push_back(-3);
    // v.push_back(4);
    // v.push_back(-1);
    // v.push_back(2);
    // v.push_back(1);
    // v.push_back(-5);
    // v.push_back(4);

    int result =  s.maxSubArray(v);
    cout<<result<<endl;
    return 0;   
}