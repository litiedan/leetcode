#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
// 定义两个指针 fast 和 slow 分别为快指针和慢指针
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        int fast = 1, slow = 1;
        while (fast < n) {
            if (nums[fast] != nums[fast - 1]) {
                nums[slow] = nums[fast];
                ++slow;
            }
            ++fast;
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
    int result =  s.removeDuplicates(v);
    cout<<result<<endl;
    for_each(v.begin(),v.begin()+result,print01);
    cout<<endl;
    return 0;   
}