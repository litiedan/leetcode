#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
// //如果左指针left 指向的元素等于val，此时将右指针right 指向的元素复制到左指针 left 的位置，
// 然后右指针 right 左移一位。如果赋值过来的元素恰好也等于val，可以继续把右指针 right 指向的元素的值赋值过来
// （左指针left 指向的等于val 的元素的位置继续被覆盖），直到左指针指向的元素的值不等于val 为止。
// 当左指针left 和右指针 right 重合的时候，左右指针遍历完数组中所有的元素。

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0, right = nums.size();
        while (left < right) {
            if (nums[left] == val) {
                nums[left] = nums[right - 1];
                right--;
            } else {
                left++;
            }
        }
        return left;
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