#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printvector(vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
}
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1, ans = n;
        while (left <= right) {
            int mid = ((right - left) >> 1) + left;
            if (target <= nums[mid]) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};



int main()
{
    Solution Sol;
    vector<int> v;
    int target = 99;
    for(int i = 0;i<10;i+=2)
    {
        v.push_back(i);
    }
    printvector(v);
    cout<<"#########"<<endl;
    Sol.searchInsert(v,target);
    int result = Sol.searchInsert(v,target);
    cout<<result<<endl;
    return 0;
}