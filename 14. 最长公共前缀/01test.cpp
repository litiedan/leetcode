#include<iostream>
#include<vector>
#include<algorithm>
// #include<bits/stdc++.h>//导入全部头文件
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;
        // cout<<strs.size()<<endl;
        //找出最短的单词的长度minlen
        int minlen = strs[0].size();
        for(int i = 0;i<strs.size();i++)
        {
            // cout<<strs[i].size()<<" "<<strs[i]<<endl;
            if(strs[i].size()<minlen)
            {
                minlen  = strs[i].size();
            }
        }
        // cout<<minlen<<endl;
        bool tag = true;//设置字母不等的标志
        //按列遍历二维数组
        for (int i = 0; i < minlen; i++)
        {
            //遍历当前列    判断每一列的字母都相同
            for(int j = 1;j<strs.size();j++)
            {
                // cout<<strs[j][i]<<" ";
                if(strs[j][i]!=strs[j-1][i])
                {
                    tag = false;
                }
            }
            //如果相同  插入
            if(tag)
            {
                result.push_back(strs[0][i]);
            }
            else
            {
                break;
            }
            
            // cout<<endl;
        }
        



        return result;
    }
};


int main()
{
    Solution sol;
    vector<string> strs ;
    strs.push_back("flower");
    strs.push_back("lowww");
    strs.push_back("oght");
    string result = sol.longestCommonPrefix(strs);
    cout<<result<<endl;
    return 0;
}