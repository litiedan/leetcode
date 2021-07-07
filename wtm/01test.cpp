#include<iostream>
#include<cmath>
using namespace std;
//四元数差值方法nlerp
//已知t1时刻的位姿四元数q1，t2时刻的位姿四元数q2，求t（t1<t<t2）时刻的位姿四元数
class Quaterniond
{
public:
    float w;//实部
    float x,y,z;//虚部
    Quaterniond()
    {
    }
    Quaterniond(float w,float x,float y,float z)
    {
        this->w = w;
        this->x = x;
        this->y = y;
        this->z = z;
    }
    // 四元数乘系数
    Quaterniond operator*(float t)
    {
        Quaterniond temp;
        temp.w = this->w * t;
        temp.x = this->x * t;
        temp.y = this->y * t;
        temp.z = this->z * t;
        return temp;
    }
    // 四元数加四元数
    Quaterniond operator+(Quaterniond q)
    {
        Quaterniond temp;
        temp.w = this->w + q.w;
        temp.x = this->x + q.x;
        temp.y = this->y + q.y;
        temp.z = this->z + q.z;
        return temp;
    }
    // 四元数求模
    float length()
    {
        return sqrt(this->w*this->w+this->x*this->x+this->y*this->y+this->z*this->z);
    }
    // 四元数归一化
    Quaterniond Normlize()
    {
        float length  = this->length();
        *this = *this *  (1/length);
        return *this;
    }
    void print()
    {
        cout<<this->w<<"   "<<this->x<<"   "<<this->y<<"   "<<this->z<<endl;
    }
};
class Solution {
public:
    Quaterniond Nlerp(Quaterniond q1,Quaterniond q2,float t) {
        Quaterniond qt;
        //归一化
        q1.Normlize();
        q2.Normlize();
        // 四元数的 Nlerp 公式：q(t)=(1-t)q1+t q2 / || (1-t)q1+t q2 ||
        qt = (q1*(1-t) + q2*t);
        qt.Normlize();
        return qt;
    }
};

int main()
{
    float t1 = 3;
    float t2 = 5;
    float t = 4;
    Quaterniond q1(0.55,0.3, 0.2, 0.2 );
    Quaterniond q2(-0.1,0.3, -0.7, 0.2);
    cout<<t1<<"时刻的位姿四元数为：";
    q1.print();
    cout<<t2<<"时刻的位姿四元数为：";
    q2.print();
    int temp = (t-t1)/(t2-t1);
    Solution sol;
    Quaterniond qt = sol.Nlerp(q1,q2,temp);
    cout<<"计算得："<<t<<"时刻的位姿四元数为：";
    qt.print();
    return 0;
}


