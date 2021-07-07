#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

class Solution {
public:
    //计算x_i的幂次和
    float power_sum(vector<float> v_x,int p)
    {
        float sum = 0;
        for (int i = 0; i < v_x.size(); i++)
        {
            sum = sum + pow(v_x[i],p);
        }
        return sum;
    }
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
    int data_nums;
    cout<<"请输入数据的对数："<<endl;
    cin>>data_nums;
    for (int i = 0; i < data_nums; i++)
    {
        cout<<"请输入第"<<i+1<<"组数据的x和y"<<endl;
        cin>>x>>y;
        v_x.push_back(x);
        v_y.push_back(y);
    }
    // vector<float> v_w = Sol.paramete(v_x,v_y);
    float sum_power = Sol.power_sum(v_x,2
    );
    
    return 0;
}