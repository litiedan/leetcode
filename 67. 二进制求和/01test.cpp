#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
// 
class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        bool carry = false;
        cout<<a<<endl;
        //先补0至位数相同
       int maxsize = max(a.size(),b.size());
       int minsize = min(a.size(),b.size());
        if(a.size()!=b.size())
        {
            if(a.size()<b.size())
            {
                for(int i = 0;i<maxsize-minsize;i++)
                {
                    a.insert(0,"0");
                }
            }
            else if(a.size()>b.size())
            {
                for(int i = 0;i<maxsize-minsize;i++)
                {
                    b.insert(0,"0");
                }
            }
        }
        cout<<"original"<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        cout<<"reverse"<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        int i  = 0;
        while (a[i]||b[i])
        {
            cout<<a[i]<<"   "<<b[i]<<endl;

                if(a[i]=='1'&&b[i]=='1')
                {
                    if(carry)
                    {
                        result.insert(0,"1");
                        carry = true;
                    }
                    else
                    {
                        result.insert(0,"0");
                        carry = true;
                    }
                }
                else if(a[i]=='0'&&b[i]=='0')
                {
                    if(carry)
                    {
                        result.insert(0,"1");
                        carry = false;
                    }
                    else
                    {
                        result.insert(0,"0");
                        carry = false;
                    }
                }
                else
                {
                    if(carry)
                    {
                        result.insert(0,"0");
                        carry = true;
                    }
                    else
                    {
                        result.insert(0,"1");
                        carry = false;
                    }
                }
            i++;
        }
        if(carry)
        {
            result.insert(0,"1");
        }
        return result;
    }
};

int main()
{
    Solution sol;

    string a = "110";
    string b = "111000";

    string result =  sol.addBinary(a,b);
    cout<<result<<endl;

    
    return 0;   
}