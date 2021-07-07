#include<iostream>
#include<vector>
#include<algorithm>
// #include<bits/stdc++.h>//导入全部头文件
using namespace std;
void bianli(vector<int> temp)
{
        for(int i = 0;i<temp.size();i++)
        {
            cout<<temp[i]<<endl;
        }
}
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // C++ 这里的 = 拷贝是值拷贝，会得到一个新的数组
        auto matrix_new = matrix;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                matrix_new[j][n - i - 1] = matrix[i][j];
            }
        }
        // 这里也是值拷贝
        matrix = matrix_new;
    }
};
//遍历容器

int main()
{
    Solution sol;
    vector<vector<int>> image = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    sol.rotate(image);
    for(int i = 0;i<image.size();i++)
    {
        bianli(image[i]);
    }
    return 0;
}