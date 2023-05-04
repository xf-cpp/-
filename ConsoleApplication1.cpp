// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <fstream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashtable; //创建空哈希表，哈希表->first是键，->second是值
        for (int i = 0; i < nums.size(); ++i) {
            auto it = hashtable.find(target - nums[i]); //根据第一个数在哈希表中找第二个数
            if (it != hashtable.end()) { //在哈希表中寻找第二个数，若有，返回其在哈希表中的值和对应键
                return { it->second, i };
            }
            hashtable[nums[i]] = i;//没有找到第二个数 创建哈希表，将元素和对应下标加入哈希表
        }
        return {};
    }
};
int main() {
    Solution a = Solution();
    vector<int> v1 = {2, 7, 11, 15},v2;
    int target = 17;

    v2 = a.twoSum(v1, target);
    for ( auto i :v2)
    {
        cout << i << endl;
    }
};