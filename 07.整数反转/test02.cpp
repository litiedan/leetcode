#include<iostream>
#include<queue>
#include<cmath>
#include<limits.h>
using namespace std;

// 给你一个 32 位的有符号整数 x ，返回将 x 中的数字部分反转后的结果。

// 如果反转后整数超过 32 位的有符号整数的范围 [−231,  231 − 1] ，就返回 0。

// 假设环境不允许存储 64 位整数（有符号或无符号）。
// 示例 1：

// 输入：x = 123
// 输出：321
// 示例 2：

// 输入：x = -123
// 输出：-321
// 示例 3：

// 输入：x = 120
// 输出：21

//考虑范围
class Solution {
public:
    
//leetcode优解
        int reverse(int x) 
        {
            long long n = 0;
            while(x)
                {
                    cout<<"1----n="<<n<<" x="<<x<<endl;
                    n = n * 10 + x % 10;
                    x /= 10;
                    cout<<"2----n="<<n<<" x="<<x<<endl;
                //cout<<x<<" ";
                }
            if(n > INT_MAX || n < INT_MIN) return 0;
            return n;
     }
///////////
};

void test01()
{
    //int -2147483648~2147483647    2^32 
    cout << INT_MIN <<endl;
    cout << INT_MAX <<endl;
}

int main()
{

    Solution s;
    int result = s.reverse(-21474);
    cout<<result<<endl;

    // test01();
    return 0;
}