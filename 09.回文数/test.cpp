#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#include<limits.h>

// 给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
// 回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。例如，121 是回文，而 123 不是。
void print01(int val)
{
    cout<<val<<" ";
}

class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> v;
        int q;
        if(x<0)
        {
            return 0;
        }
        else if(x == 0)
        {
            return 1;
        }
        while(x!=0)
        {
            q = x % 10;//取余数
            x = x / 10;
            v.push_back(q);
        }
        if(v.empty())
        {
            return 0;
        }
        for_each(v.begin(),v.end(),print01);//此处为遍历整个容器并做打印操作
        cout<<endl;
        vector<int>::iterator it_pos = v.begin();
        vector<int>::iterator it_nvg = v.end()-1;
        while (it_pos<it_nvg)
        {
            cout<<*(it_pos)<<"   "<<*(it_nvg)<<endl;
            if(*(it_pos)!=*(it_nvg))
            {
                return false;
            }
            it_pos++;
            it_nvg--;
        }
        return true;
    }
};
int main()
{
    Solution sol;
    bool result = sol.isPalindrome(20);
    cout<<result<<endl;
    return 0;
}