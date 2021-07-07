#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
    float power_sum(int n,float x,int p)
    {
        float sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + pow(x,p);
        }
        return sum;
    }
class Solution {
public:
    vector<float> paramete(vector<float> v_x,vector<float> v_y)
    {
        
    }

};
int main()
{
    Solution Sol;
    vector<float> v_x;
    vector<float> v_y;
    float x,y;
    x = 2;
    y = 3.5;
    float z = pow(x,y);
    cout<<z<<endl;
    
    return 0;
}