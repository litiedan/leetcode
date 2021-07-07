#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
// 快慢指针
// //快指针遍历并判断是否等于val
// 是则继续遍历
// 不是则将当前值赋值给慢指针后，慢指针后移，快指针继续遍历
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = 0;
        if(nums.empty())
        {
            return n;
        }
        int fast = 0,slow =0;
        for(;fast < nums.size();fast++)
        {
            cout<<nums[fast]<<"    "<<nums[fast]<<endl;
            if(nums[fast]!=val)
            {
                nums[slow] = nums[fast];
                slow++;
            }
        }
        return slow;
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
    int result =  s.removeElement(v,1);
    cout<<result<<endl;
    for_each(v.begin(),v.begin()+result,print01);
    cout<<endl;
    return 0;   
}