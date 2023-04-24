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
        ListNode* h3 = l3;
        l3->next = nullptr;//创建头结点
        while (l2 != nullptr || l1 != nullptr || i != 0) {
            if (l1 != nullptr) {
                i += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                i += l2->val;
                l2 = l2->next;
            }
            h3->next = new ListNode(i % 10);
            h3 = h3->next;
            i = i / 10;

        }
        return l3->next;
    }
};
int main()
{
    Solution a = Solution();
    ListNode* l1 = new ListNode;//创建头结点
    ListNode* l2 = new ListNode;//创建头结点
    ListNode* l3 = new ListNode;
    l1->next = nullptr;
    l2->next = nullptr;//创建头结点
    ListNode* h2 = l2, * e2 = l2;
    ListNode* h1 = l1, * e1 = l1;
    int num1[] = { 2,4 };
    int num2[] = { 2,6 };//401
    int i = 0, j = 0;

    for (int& i : num1) {
        ListNode* node = new ListNode;
        node->val = i;
        node->next = nullptr;
        e1->next = node;
        e1 = node;       //尾插法构建单链表
    }
    e1->next = nullptr;
    for (int& j : num2) {
        ListNode* node = new ListNode;
        node->val = j;
        node->next = nullptr;
        e2->next = node;
        e2 = node;       //尾插法构建单链表
    }
    e2->next = nullptr;
    l3 = a.addTwoNumbers(l1->next, l2->next);
    for (ListNode* i = l3; i != nullptr; i = i->next)
    {
        cout << i->val << endl;
    }

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
