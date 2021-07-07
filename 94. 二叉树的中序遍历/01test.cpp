#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<malloc.h>
using namespace std;

// * Definition for a binary tree node.
struct TreeNode {
   int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
void BiTree(TreeNode **T)
{
    char ch;
    scanf("%c",&ch);
    if(ch=='#')
        T=nullptr;
    else
    {
        *T = (TreeNode *)malloc(sizeof(TreeNode));
        if(!T)
            exit(-1);
        cout<<ch<<endl;
        (*T)->val = ch;
        BiTree(&(*T)->left);
        BiTree(&(*T)->right);
    }
}
TreeNode * CreateBiTree(TreeNode *T)
{
    // T->val = 2;
    BiTree(&T);
    return T;
}
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* T) {
        // if(T==NULL)
        //     return ;
        // inorderTraversal(T->left);
        // printf("%c ",T->val);
        // inorderTraversal(T->right);
    }
};


int main()
{
    Solution sol;
    // 先序遍历输入
    // 1#23###
    TreeNode *T;
    TreeNode *TT =CreateBiTree(T);
    cout<<TT->val<<endl;
    // cout<<"CreateBiTree success"<<endl;
    // cout<<T.right->val<<endl;
    // cout<<T->right->val;
    // sol.inorderTraversal(T);
    return 0;   
}