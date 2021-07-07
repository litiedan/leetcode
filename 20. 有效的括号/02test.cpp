#include<iostream>
#include<stack>
#include<map>
#include<algorithm>
// #include<bits/stdc++.h>//导入全部头文件
using namespace std;
//使用stack和map容器
class Solution {
public:
    bool isValid(string s) {
        stack<char> vc;
        map<char,char> m;
        m[')']='(';
        m[']']='[';
        m['}']='{';
        for (int i = 0; i < s.size(); i++)
        {
           if(s[i]=='('||s[i]=='['||s[i]=='{')
           {
               vc.push(s[i]);
           }
            else if(vc.size()>0&&m[s[i]]==vc.top())
            {
                vc.pop();
            }
            else return 0;
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
    string s = "[";
    bool result = sol.isValid(s);
    cout<<result<<endl;
    return 0;
}