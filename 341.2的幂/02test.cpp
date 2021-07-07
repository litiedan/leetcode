#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool isPowerOfFour(int n)
    {
        if(n <= 0) {
            return false;
        }
        bool flag = true;
        while(n > 1) 
        {
            if(n % 2 == 0)
            {
                n /= 2;
            }
            else
            {
                flag = false;
                break;
            }
        }
        return flag;
    }
};

int main()
{
    Solution s;
    for(int n = 0;n<100;n++)
    {
            bool result = s.isPowerOfFour(n);
            cout<<n<<"      "<<result<<endl;
    }
            //     bool result = s.isPowerOfFour(68);
            // cout<<result<<endl;

    return 0;
}