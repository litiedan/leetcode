#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
// 
class Solution {
public:
    int mySqrt(int x) {
        for(int i = 0;i <=x;i++)
        {
            if(i*i<=x&&(i+1)*(i+1)>x)
            {
                return i;
            }
                        else
            {
               continue;
            }
        }
    }
};
int main()
{
    Solution sol;


    int result =  sol.mySqrt(1);

    cout<<result<<endl;
    
    
    return 0;   
}