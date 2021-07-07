#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool isPowerOfFour(int n)
    {
        if (n < 1) return false;
        while (n % 4 == 0)
        {
            n /= 4;
        }
        return n == 1;
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