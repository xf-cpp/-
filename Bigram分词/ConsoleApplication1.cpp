// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        string str1;
        istringstream str(text);
        vector<string> re{}, comP{};
        /*将字符串按空格拆分，放在comP中*/
        while (str >> str1) {
            comP.push_back(str1);
        };
        for (int i = 0; i < comP.size()-2; i++) {
            if (comP[i] == first && comP[i+1]==second) {
                re.push_back(comP[i + 2]);
            }
        }
        return re;
     }
};
int main()
{   
    vector<string> re{};
    string v1 = { "alice is aa good girl she is a good student" };
    istringstream test(v1);
    string v2;
    //while (test >> v2) {
    //    cout << v2 << endl;
    //};
    string first = "a", second = "good";
    Solution a = Solution();
    
    re = a.findOcurrences(v1, first, second);
    for (auto ch : re) {
        cout << ch << endl;
    }
   
        
}

