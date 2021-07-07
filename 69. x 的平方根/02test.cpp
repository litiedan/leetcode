#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
// 
class Solution {
public:
    int mySqrt(int x) {
        int l = 0, r = x, ans = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if ((long long)mid * mid <= x) 
            {
                ans = mid;
                l = mid + 1;
            } 
            else
             {
                r = mid - 1;
            }
        }
        return ans;
        
    }
};
int main()
{
    Solution sol;


    int result =  sol.mySqrt(0);

    cout<<result<<endl;
    
    
    return 0;   
}