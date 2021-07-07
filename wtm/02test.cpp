#include<iostream>
#include<algorithm>
using namespace std;
//交换单链表中两元素的位置
 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
};
//查找单链表l1中指定结点p的上一个节点位置
ListNode* findpre(ListNode *l1,ListNode *p)
{
    ListNode * prep = l1;
    for(;prep;prep=prep->next)
    {
        if(prep->next==p)
            break;
    }
    return prep;
}
//头插
void insert(const int& d,ListNode *head)
{
    ListNode *p = new ListNode(d);
    p->next = head->next;
    head->next = p;
}
//遍历打印链表
void print(ListNode *head)
{
    for(ListNode * p = head->next;p;p=p->next){
        cout << p->val << " ";
    }
    cout<<endl;
}
//获取链表长度
int getLength(ListNode *head)
{
	int len = 0;
	ListNode * p = head->next;
	while(p!=nullptr)
	{
		len++;
		p = p->next;
	}
	return len;
}

class Solution {
public:
    ListNode* swapelem(ListNode* l1, ListNode* p, ListNode* q) {
        ListNode * prep = findpre(l1,p);
        ListNode * preq = findpre(l1,q);
        if(p==q)//如果pq重合
        {
            return l1;
        }
        else if(p->next==q)//如果pq相邻
        {
            p->next = q->next;
            q->next = p;
            prep->next = q;
        }
        else//pq不重合也不相邻
        {
            preq->next = q->next;
            prep->next = q;
            q->next = p->next;
            p->next = preq->next;
            preq->next =  p;
        }
        return l1;
    }
};


int main()
{
    Solution Sol;
    ListNode *l1 = new ListNode(0);//定义一个初始为空的链表，方法是定义一个用作链表头的指针并将其初始化为 nullptr
    cout<<"#####交换前#####"<<endl;
    //链表头插
    insert(8,l1);
    insert(7,l1);
    insert(6,l1);
    insert(5,l1);
    insert(4,l1);
    insert(3,l1);
    insert(2,l1);
    insert(1,l1);
    print(l1);
    
    //获取链表长度
    int l1_length = getLength(l1);
    //交换第n个和第m个元素
    int n;
    int m;
    cout<<"请输入交换第n个和第m个元素(0-"<<l1_length<<")"<<endl;
    cin>>n>>m;
    //找到链表中对应的两个位置，p在前,q在后
    int min_elem = min(n,m);
    int max_elem = max(n,m);
    ListNode * p = l1;
    ListNode * q = l1;
    if(min_elem>0&&max_elem<=l1_length)
    {
        for (int i = 0; i < min_elem; i++)
        {
            p = p->next;
        }
        for (int j = 0; j < max_elem; j++)
        {
            q = q->next;
        }
        // // swapelem()  参数分别是链表，以及交换两结点的指针
        ListNode *l3 = Sol.swapelem(l1,p,q);
        cout<<"#####交换后#####"<<endl;
        print(l3);
    }
    else
    {
        cout<<"输入不在链表范围"<<endl;
    }

    return 0;
}