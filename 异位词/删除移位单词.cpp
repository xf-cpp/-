#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
class Solution {
public:
	vector<string> removeAnagrams(vector<string>& words) {
		int len = words.size();
		vector<int> temp(26),comp(26,0);//26����ĸ��Ƶ������temp�ͱȽ����� comp
		for (int len = 0; len < words.size()-1; len++)
		{	
			temp = comp;//ÿ��ѭ��Ƶ�������ʼ��
			for (auto i = 0; i < words[len].size(); i++) {
				temp[words[len][i]-'a']++;					//�����len��λ�õĴ���ĸƵ��
			}
			for (auto j = 0; j < words[len+1].size(); j++) {
				temp[words[len+1][j] - 'a']--;				//�����len+1��λ�õĴ���ĸƵ��
			}
			if (temp == comp) {            //��Ƶ������ȫΪ0ʱ��˵������λ�ʣ�����һλ��λ��ɾ��
				auto ben = words.begin();
				words.erase(ben + len+1);
				len--;						//��eraseɾ��������ָʾ��λ�ú�Ҫ���±������ƶ�һλ�������������һ�ַ����ж�
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