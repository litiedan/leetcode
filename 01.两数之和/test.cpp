#include<iostream>
#include<vector>
#include<map>
using namespace std;
// 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 的那 两个 整数，并返回它们的数组下标。
// 输入：nums = [2,7,11,15], target = 9
// 输出：[0,1]
// // 解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。
// 输入：nums = [3,2,4], target = 6
// 输出：[1,2]
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int count_a = 0;//第一个加数的下标计数器
        vector<int> c(2,-1);//用来承载结果，初始化一个大小为2，值为-1的容器c
        for(vector<int>::iterator it =nums.begin();it!=nums.end();it++ )//遍历取第一个加数
        {   
            int count_b = count_a+1;//第二个加数的下标计数器
            for (vector<int>::iterator it2 =it+1;it2!=nums.end();it2++)//嵌套遍历取第二个加数
            {
                if((*it)+(*it2)==target)//如果两个加数的和满足条件  返回它们对应的下标
                {
                    cout<<*it<<"+"<<*it2<<"="<<target<<endl;
                    c[0] = count_a;
                    c[1] = count_b;
                    return c;//返回一个容器
                }
                count_b++;
            }          
            count_a++;
        }
    }
};
int main()
{
    Solution sol;
    vector<int> muns = {2,7,11,15};
    vector<int> b = sol.twoSum(muns,4);
    if(b[0]==-1)
    {
        cout<<"找不到符合要求的答案"<<endl;
    }
    else{
        cout<<b[0]<<"  "<<b[1]<<endl;
    }
    
    return 0;
}

