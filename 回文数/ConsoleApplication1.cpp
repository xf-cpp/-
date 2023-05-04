// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include<vector>
#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int len = 0,num=x,t=1,mun=0;//mun 表示重构的回文数
        if (x < 0) {        //负数一定不是回文
            return false;
        }
        else if (num == 0)//将0排除
            return true;
        else{               //下一步计算
            /*
                将数反转重构，若等于原来的数，则是回文数，否则不是
            */
            while (num > 0) { 
                mun *= 10;      
                t = num % 10;
                num /= 10;   
                mun += t;
            }
            
            return mun==x;
            
           
        }
            return false;

    }
};
int main()
{
    Solution a = Solution();
    int num = 121;
    cout << a.isPalindrome(num);

}

