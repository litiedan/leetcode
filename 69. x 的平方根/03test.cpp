#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
// 牛顿迭代法 f(x) = x*x - C
class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
        return 0;
        double x0 = x;
        double xn;
        while (1)
        {
            xn = x0 - (x0*x0-x)/(2*x0);
            if(fabs(xn-x0)<1e-7)
            {
                return int(x0);
            }
            else
            {
                x0 = xn;
            }
        }
        
    }
};
int main()
{
    Solution sol;


    int result =  sol.mySqrt(10.6);

    cout<<result<<endl;
    
    
    return 0;   
}