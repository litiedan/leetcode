#include<iostream>
#include<vector>
#include<algorithm>
// #include<bits/stdc++.h>//导入全部头文件
using namespace std;
//vector会超出时间限制所以换成了stack
class Solution {
public:
    bool isValid(string s) {
        vector<char> vc;
        for (int i = 0; i < s.size(); i++)
        {
           if(s[i]=='('||s[i]=='['||s[i]=='{')
           {
               vc.push_back(s[i]);
           }
            else if(s[i]==')')
            {
                if(vc.size()>0&&vc.back()=='(') vc.pop_back();
                else return 0;
            }
            else if(s[i]==']')
            {
                if(vc.size()>0&&vc.back()=='[') vc.pop_back();
                else return 0;

            }
            else if(s[i]=='}')
            {
                if(vc.size()>0&&vc.back()=='{') vc.pop_back();
                else return 0;
            }
           for(int j = 0;j<vc.size();j++)
           {
               cout<<vc[j]<<" ";
           }
           cout<<endl;
        }
        if(vc.size()==0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
//遍历容器

int main()
{
    Solution sol;
    string s = "([)]";
    bool result = sol.isValid(s);
    cout<<result<<endl;
    return 0;
}