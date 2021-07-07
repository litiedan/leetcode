#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// 可以运行通，但是leetcode提示超出时间限制，可能是数据量过大时，遍历的复杂度太大
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

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
    int result = s.largestRectangleArea(v);
    cout<<result<<endl;
    return 0;
}