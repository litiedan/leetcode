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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head->next==nullptr)
            return head;
            //如果后一个元素与当前相等  删除当前元素，不后移
            //如果不相等  不删除   后移
        for(ListNode * p = head->next;p;)
        {
            cout<<"p->val:"<<p->val<<endl;
            if(p->next&&p->val==p->next->val)
            {
                cout<<"----"<<endl;
                ListNode *q;
                q=p->next;
                cout<<q->val<<endl;
                p->next = q->next;
                delete q;
            }
            else
            {
                p=p->next;
            }
        }
        cout<<"aaaaaaaaa"<<endl;
        return head;
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
    insert(4,l1);
    insert(1,l1);
    insert(1,l1);
    insert(1,l1);
    insert(1,l1);


    print(l1);
    cout<<"##########"<<endl;

    ListNode *l2 = Sol.deleteDuplicates(l1);
    print(l2);

    return 0;
}