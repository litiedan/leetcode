#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
// 超了30以后有误差
class Solution {
public:
    int climbStairs(int n) {
        //最多有n/2个2
        int nums2 = n/2;
        int result = 1;
        //按照2的个数遍历
        for(int i = 1;i<=nums2;i++)
        {
            result = result + combination(n-i,i);
            // cout<<result<<endl;
        }
        return result;   
    }
    //求组合的个数 C(n,m) = n!/(m!*(n-m)!)
    double combination(int down,int up)
    {
        double fenzi = factorial(down);
        double fenmu = factorial(up)*factorial(down-up);
        return fenzi/fenmu;
    }
    //求阶乘
    double factorial(int n)
    {
        double fac = 1;
        for(int i = 1;i<=n;i++)
        {
            fac = fac * i;
        }
        return fac;
    }
};
int main()
{
    Solution sol;


    int result =  sol.climbStairs(35);
    cout<<result<<endl;
    
    
    return 0;   
}