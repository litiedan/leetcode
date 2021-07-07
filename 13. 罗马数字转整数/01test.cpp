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
        string::iterator it = s.begin();
        vector<int> num;
        while(it!=s.end())
        {
            char  ch = *it;
            cout<<ch<<endl;
            switch(ch)
            {
                case 'I' :  num.push_back(1) ;    break;
                case 'V' : num.push_back(5) ;    break;
                case 'X' :  num.push_back(10) ;    break;
                case 'L' :  num.push_back(50) ;    break;
                case 'C' :  num.push_back(100) ;    break;
                case 'D' :  num.push_back(500) ;    break;
                case 'M' :  num.push_back(1000) ;    break;
                default :cout << "无效的输入" << endl;break;
            }
            it++;
        }

        for_each(num.begin(),num.end(),print01);//此处为遍历整个容器并做打印操作
        cout<<endl;
        
        int sum = *(num.end()-1);
        vector<int>::iterator temp;
        for(vector<int>::iterator it = num.end()-1;it!=num.begin()-1;it--)
        {
            
            temp = it;
            int a = *it;
            int b = *(--temp);
            // cout<<a<<"  "<<b<<endl;
            if(b<a)
            {
                sum =sum - b;
            }
            else
            {
                sum =sum + b;
            }
        }
        return sum;
    }
};

int main()
{
    Solution s;
    int result = s.romanToInt("IV");
    cout<<result<<endl;
    return 0;
}