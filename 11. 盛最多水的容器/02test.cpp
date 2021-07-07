#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
            int res = 0;
            int i = 0;//指向容器左边
            int j = height.size() - 1;//指向容器右边
            while (i < j) //两个指针不重合
            {
                int area = (j - i) * min(height[i], height[j]);//求当前面积
                res = max(res, area);//将当前面积与最大面积作比较
                if (height[i] < height[j])//如果左侧的水柱低，左侧指针右移
                {
                    i++;
                } 
                else //如果右侧的水柱低，右侧指针左移
                {
                    j--;
                }
            }
            return res;
    }
};
// [1,8,6,2,5,4,8,3,7]
int main()
{
    Solution s;
    vector<int> v;
    v.push_back(1);
    v.push_back(8);
    v.push_back(6);
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(8);
    v.push_back(3);
    v.push_back(7);
    int result = s.maxArea(v);
    cout<<result<<endl;
    return 0;
}