#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
typedef struct BiTNode
{
    char data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;
void PreOrderTraverse(BiTree T)//二叉树的先序遍历
{
    if(T==NULL)
        return ;
    printf("%c ",T->data);
    PreOrderTraverse(T->lchild);
    PreOrderTraverse(T->rchild);
}
void InOrderTraverse(BiTree T)//二叉树的中序遍历
{
   if(T==NULL)
       return ;
   InOrderTraverse(T->lchild);
    printf("%c ",T->data);
   InOrderTraverse(T->rchild);
}
void PostOrderTraverse(BiTree T)//后序遍历
{
    if(T==NULL)
        return;
    PostOrderTraverse(T->lchild);
    PostOrderTraverse(T->rchild);
    printf("%c ",T->data);
}
void CreateBiTree(BiTree *T)
{
    char ch;
    scanf("%c",&ch);
    if(ch=='#')
        *T=NULL;
    else
    {
        *T=(BiTree  )malloc(sizeof(BiTNode));
        if(!*T)
            exit(-1);
        (*T)->data=ch;
        CreateBiTree(&(*T)->lchild);
        CreateBiTree(&(*T)->rchild);
    }
}
int main()
{
    BiTree T;
    CreateBiTree(&T);
    cout<<"--------------"<<endl;
    PreOrderTraverse (T);
    cout<<endl;
    cout<<"--------------"<<endl;
    InOrderTraverse(T);
    cout<<endl;
    cout<<"--------------"<<endl;
    PostOrderTraverse(T);
    cout<<endl;
    return 0;
}