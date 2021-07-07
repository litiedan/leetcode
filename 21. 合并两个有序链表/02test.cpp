#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

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
        ListNode* preHead = new ListNode(-1);

        ListNode* prev = preHead;
        // cout<<l1->val<<endl;
        // cout<<l2->val<<endl;
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val < l2->val) {
                prev->next = l1;
                l1 = l1->next;
            } else {
                prev->next = l2;
                l2 = l2->next;
            }
            prev = prev->next;
        }

        // 合并后 l1 和 l2 最多只有一个还未被合并完，我们直接将链表末尾指向未合并完的链表即可
        prev->next = l1 == nullptr ? l2 : l1;

        return preHead->next;
        
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
    for(ListNode * p = head;p;p=p->next){
        cout << p->val << endl;
    }
}
int main()
{
    Solution Sol;

    ListNode *l1 = new ListNode(0);//定义一个初始为空的链表，方法是定义一个用作链表头的指针并将其初始化为 nullptr
    l1->next = nullptr; //表示链表的结尾
    insert(4,l1);
    insert(2,l1);
    print(l1);
    cout<<"##########"<<endl;
    ListNode *l2= new ListNode(0);
    insert(4,l2);
    insert(3,l2);
    print(l2);
    cout<<"##########"<<endl;

    ListNode *l3 = Sol.mergeTwoLists(l1,l2);
    print(l3);

    return 0;
}