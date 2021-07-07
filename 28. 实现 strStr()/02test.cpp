#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
// 
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size())
        {
            return -1;
        }
        if(needle.size()==0)
        {
            return 0;
        }
        // cout<<haystack.size()<<endl;
        // cout<<haystack[0]<<endl;
        int i,j,count;
        vector<int> counts;
        for(i = 0;i<haystack.size();i++)
        {
            count = 0;
            for(j = 0;j<needle.size();j++)
            {
                if (haystack[i+j]!='\0')
                {
                     cout<<needle[j]<<" "<<haystack[i+j]<<endl;
                    if(needle[j]==haystack[i+j])
                    {
                        count++;
                    }
                }
            }
            cout<<count<<endl;
            counts.push_back(count);
        }
        for (int i = 0; i < counts.size(); i++)
        {
            cout<<counts[i]<<"  ";
            if(counts[i]==needle.size())
            {
                return i;
            }
        }
        return -1;
        
    }
};

int main()
{
    Solution s;
    string haystack = "hellow";
    string needle = "ll";
    int result =  s.strStr(haystack,needle);
    cout<<endl;
    cout<<result<<endl;
    return 0;   
}