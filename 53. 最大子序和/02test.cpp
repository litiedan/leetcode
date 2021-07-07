#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
// 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int pre = 0, maxAns = nums[0];
        for (const auto &x: nums) {
            pre = max(pre + x, x);
            maxAns = max(maxAns, pre);
        }
        return maxAns;
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