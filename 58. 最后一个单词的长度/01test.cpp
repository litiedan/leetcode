#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        //如果字符串是空  返回0
        if(s.size()==0) return 0;
        //如果全是空格  返回0
        int blank = 0;
        for(int i = 0;i < s.size();i++)
        {
            if(s[i]==' ')
            {
                blank++;
            }
        }
        if(blank==s.size())
        {
            return 0;
        }
        //删除字符串最后的空格
        while (s[s.size()-1]==' ')
        {
            s.erase(s.size()-1,1);//删除字符串最后的空格
        }


        //统计最后一个空格后的字符的个数
        int result = 0;
        for(int i = s.size()-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
                return result;
            }
            result++;
        }
        return result;
    }
};
int main()
{
    Solution sol;
    string s = "           a ";

    int result =  sol.lengthOfLastWord(s);
    cout<<result<<endl;
    
    
    return 0;   
}