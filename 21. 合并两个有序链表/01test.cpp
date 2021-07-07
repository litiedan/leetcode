#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//单链表头结点在初始化时会默认有一个数据0
 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
     };
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *pa;
        ListNode *pb;
        ListNode *pc;
        ListNode *l3 = new ListNode;

        pa = l1->next;
        pb = l2->next;
        pc = l3;
        
        while ((pa!=nullptr) &&(pb!=nullptr))
        {
            if (pa->val < pb->val)
            {
                pc->next = pa;
                pc = pa;
                pa = pa->next;
            }
             else if (pa->val > pb->val)
            {
                pc->next = pb;
                pc = pb;
                pb = pb->next;
            }
            else if(pa->val==pb->val)
            {
                pc->next = pa;
                pc = pa;
                pa = pa->next;

                pc->next = pb;
                pc = pb;
                pb = pb->next;
            }
        }
        if(pb==nullptr)              //如果q遍历完了
        pc->next = pa;   //把p剩下的接到尾部
        else if (pa==nullptr)              //p遍历完了
        pc->next = pb;   //把q剩下的接到尾部
        return l3;
        
    }
};
//头插
void insert(const int& d,ListNode *head)
{
    ListNode *p = new ListNode(d);
    p->next = head->next;
    head->next = p;
}
//遍历
void print(ListNode *head)
{
    for(ListNode * p = head->next;p;p=p->next){
        cout << p->val << endl;
    }
}
int main()
{
    Solution Sol;
    ListNode *l1 = new ListNode;//定义一个初始为空的链表，方法是定义一个用作链表头的指针并将其初始化为 nullptr
    l1->next = nullptr; //表示链表的结尾

    insert(4,l1);
    insert(2,l1);
    insert(1,l1);
    print(l1);
    cout<<"##########"<<endl;
    ListNode *l2= new ListNode;
    insert(4,l2);
    insert(3,l2);
    insert(1,l2);
    print(l2);
    cout<<"##########"<<endl;

    ListNode *l3 = Sol.mergeTwoLists(l1,l2);
    print(l3);

    return 0;
}