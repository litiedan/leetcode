#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
// 
void print01(int val)
{
    cout<<val<<" ";
}
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
                int p1 = 0, p2 = 0;
        int sorted[m + n];
        int cur;
        while (p1 < m || p2 < n) {
            if (p1 == m) {
                cur = nums2[p2++];
            } else if (p2 == n) {
                cur = nums1[p1++];
            } else if (nums1[p1] < nums2[p2]) {
                cur = nums1[p1++];
            } else {
                cur = nums2[p2++];
            }
            sorted[p1 + p2 - 1] = cur;
        }
        for (int i = 0; i != m + n; ++i) {
            nums1[i] = sorted[i];
        }
    }
};


int main()
{
    Solution s;
    vector<int> nums1;
    int m=3;
    vector<int>nums2;
    int n=3;
    nums1.push_back(1);
    nums1.push_back(7);
    nums1.push_back(8);
    nums1.push_back(9);
        nums1.push_back(10);
            nums1.push_back(10);
                nums1.push_back(10);
    nums2.push_back(1);
    nums2.push_back(5);
    nums2.push_back(6);
    nums2.push_back(6);
    nums2.push_back(6);

    s.merge(nums1,m,nums2,n);
    for_each(nums1.begin(),nums1.end(),print01);
    cout<<endl;
    return 0;   
}