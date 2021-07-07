#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
// 递归   整理规律得    1  2   3   5   8    F(n) = F(n-1)+F(n-2)
class Solution {
public:
    int climbStairs(int x) {
        if(x==1)return 1;
        if(x==2)return 2;
        return climbStairs(x-1)+climbStairs(x-2);
    }
};
int main()
{
    Solution sol;


    int result =  sol.climbStairs(5);

    cout<<result<<endl;
    
    
    return 0;   
}