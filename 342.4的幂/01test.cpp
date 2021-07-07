#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// 除留取余发现  4的n次方循环%4    的结果是 m个0最后是个1的结构
//                 /4                  %4
// 64           16                      0
// 16            4                       0
// 4               1                       0
// 1               0                       1
// 所以将%4的结果存入vector中 
// 符合条件的容器中  1的元素个数是1，且最后一个元素是1，大于1的元素个数是0
class Greater1
{
public:
    bool operator()(int val)
    {
        return val > 1;
    }
};
void print01(int val)
{
    cout<<val<<" ";
}
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n<1) return 0;
        int result = n;
        int remainder = n;
        vector<int> v;
        while (result>0)
        {
            remainder = result % 4;
            result = result/4;                
            v.push_back(remainder);
            // cout<<"############"<<endl;
            // cout<<"商"<<result<<endl;
            // cout<<"余数"<<remainder<<endl;
        }
        // for_each(v.begin(),v.end(),print01);//此处为遍历整个容器并做打印操作
        // cout<<endl;
        int numGreater1 = count_if(v.begin() , v.end(),Greater1());//查找迭代器区间有没有相邻重复元素
        // cout<<"大于1的元素个数为："<<numGreater1<<endl;
        int num1 = count(v.begin() , v.end(),1);
        // cout<<"1的元素个数为："<<num1<<endl;
        if(num1==1&&(*(v.end()-1)==1)&&numGreater1==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }

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
    // bool result = s.isPowerOfFour(19);
    // cout<<result<<endl;

    return 0;
}