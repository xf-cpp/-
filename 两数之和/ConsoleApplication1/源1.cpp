// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <fstream>
#include<unordered_map>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}

};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int i = 0;
        ListNode* l3 = new ListNode;
        l3->val = 0;
        l3->next = nullptr;//创建头结点

        ListNode* h3 = l3;
        ListNode* h2 = l2->next;
        ListNode* h1 = l1->next;

        while (h2 != nullptr || h1 != nullptr||t!=0) {
            if (h1 != nullptr) {
                i += h1->val;
                h1 = h1->next;
            }
            if (h2 != nullptr) {
                i += h2->val;
                h2 = h2->next;
            }
            h3->next = new ListNode(i % 10);
            t = t / 10;
            
        }
        return l3->next;
    }
};
int main() {
    Solution a = Solution();
    ListNode* l1 = new ListNode;//创建头结点
    ListNode* l2 = new ListNode;//创建头结点
    ListNode* l3 = new ListNode;
    l1->next = nullptr;
    l2->next = nullptr;//创建头结点
    ListNode* h2 = l2, * e2 = l2;
    ListNode* h1 = l1, * e1 = l1;
    int num1[] = { 2,4,3 };

    int num2[] = { 5,6,4 };//201
    int i = 0, j = 0;

    for (int& i : num1) {
        ListNode* node = new ListNode;
        node->val = i;
        node->next = nullptr;
        e1->next = node;
        e1 = node;       //尾插法构建单链表
        cout << node->val;

    }
    cout << endl;
    e1->next = nullptr;
    for (int& j : num2) {
        ListNode* node = new ListNode;
        node->val = j;
        node->next = nullptr;
        e2->next = node;
        e2 = node;       //尾插法构建单链表
        cout << node->val;
    }
    cout << endl;
    e2->next = nullptr;
    l3 = a.addTwoNumbers(l1, l2);
    for (ListNode* i = l3; i != nullptr; i = i->next)
    {
        cout << i->val << endl;
    }



};