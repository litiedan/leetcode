#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
// 
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        bool add1 = true;

        for(int i = digits.size()-1;i>=0;i--)
        {
            // cout<<digits[i]<<endl;
            if(digits[i]==9&&add1)
            {
                digits[i] = 0;
                if(i == 0)
                {
                    digits.insert(digits.begin(),1);
                }
                continue;
            }
            else if (add1)
            {
                digits[i] = digits[i] + 1;
                add1  = false;
            }
        }
        return digits;
    }
};

int main()
{
    Solution sol;

    vector<int> v;
    // v.push_back(7);
    v.push_back(9);
    v.push_back(9);
    // v.push_back(6);
    // v.push_back(5);
    // v.push_back(4);
    // v.push_back(3);
    // v.push_back(2);
    // v.push_back(1);
    // v.push_back(0);


    vector<int> result =  sol.plusOne(v);
    for(int i = 0;i<result.size();i++)
    {
        cout<<result[i]<<endl;
    }
    
    return 0;   
}