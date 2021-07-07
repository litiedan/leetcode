#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<numeric>
using namespace std;
// 罗马数字包含以下七种字符: I， V， X， L，C，D 和 M。
// 字符          数值
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// 例如， 罗马数字 2 写做 II ，即为两个并列的 1。12 写做 XII ，即为 X + II 。 27 写做  XXVII, 即为 XX + V + II 。
void print01(int val)
{
    cout<<val<<" ";
}
class Solution {
public:
    int romanToInt(string s) 
    {   
        
        static int a[90];int res=0;
        a['I']=1;a['V']=5;a['X']=10;a['L']=50;a['C']=100;a['D']=500;a['M']=1000;
        for(int n=s.length(),i=0,x=9999,y=0;i<n;++i)
        {
            res+=y=a[s[i]];
            if (x<y) res-=x;
            x=y+y;            
        }
        return res;
    }
};

int main()
{
    Solution s;
    int result = s.romanToInt("IV");
    cout<<result<<endl;
    return 0;
}