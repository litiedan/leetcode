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
        nums1.reserve(m+n);
        int i = 0;
        int j = 0;
        vector<int>::iterator it = nums1.begin();

        while (i<m&&j<n)
        {
            cout<<j<<"  "<<i<<endl;
            cout<<nums2[j]<<"  "<<nums1[i]<<"   "<<nums1[i+1]<<endl;
            
            // for_each(nums1.begin(),nums1.end(),print01);
            if(nums2[j]>=nums1[i]&&nums2[j]<nums1[i+1])
            {
                nums1.insert(nums1.begin()+i+1,nums2[j]);
                j++;
                i++;
            }
            else
            {
                i++;
            }
            for_each(nums1.begin(),nums1.end(),print01);
            cout<<".........."<<endl;
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