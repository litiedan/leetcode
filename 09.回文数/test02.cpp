#include<iostream>
#include<string>
using namespace std;

// 给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
// 回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。例如，121 是回文，而 123 不是。
void print01(int val)
{
    cout<<val<<" ";
}

class Solution {
public:
    bool isPalindrome(int x) {
        // 转成字符串进行判断
        string s = to_string(x);
        cout<<s<<endl;
        // 定义双指针
        int left = 0, right = s.length() - 1;
        while(left < right) {
            // 判断不是回文，返回false
            if(s[left] != s[right]) {
                return false;
            }
            // 左右指针移动
            left ++;
            right --;
        }
        return true;
    }
};
int main()
{
    Solution sol;
    bool result = sol.isPalindrome(1234321);
    cout<<result<<endl;
    return 0;
}