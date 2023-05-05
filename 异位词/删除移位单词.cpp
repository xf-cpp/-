#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
class Solution {
public:
	vector<string> removeAnagrams(vector<string>& words) {
		int len = words.size();
		vector<int> temp(26),comp(26,0);//26个字母的频率数组temp和比较数组 comp
		for (int len = 0; len < words.size()-1; len++)
		{	
			temp = comp;//每次循环频率数组初始化
			for (auto i = 0; i < words[len].size(); i++) {
				temp[words[len][i]-'a']++;					//计算第len个位置的词字母频率
			}
			for (auto j = 0; j < words[len+1].size(); j++) {
				temp[words[len+1][j] - 'a']--;				//计算第len+1个位置的词字母频率
			}
			if (temp == comp) {            //当频率数组全为0时，说明是移位词，将后一位移位词删除
				auto ben = words.begin();
				words.erase(ben + len+1);
				len--;						//用erase删除迭代器指示的位置后，要将下标往后移动一位，否则会跳过下一字符的判断
			}
		}
		return words;
	}
    
};
int main() {
	vector<string> v{ "abba","baba","bbaa","cd","cd" }, v2{};
	for (int i=0; i<v.size(); i++) {
		cout << v[i] << endl;
	};

	cout << endl;

	Solution a = Solution();

	v2 = a.removeAnagrams(v);
	for (auto ch:v2) {
		cout << ch << endl;
	};

}