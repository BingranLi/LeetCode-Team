#include<iostream>
#include<vector>
#include<string>

using namespace std;

string format(int begin, int end)
{
	char buffer[32];
	if (end == begin)
	{
		sprintf_s(buffer, "%d", begin);
	}
	else{
		sprintf_s(buffer, "%d->%d", begin, end);
	}
	return string(buffer);
}

vector<string> summaryRanges(vector<int>& nums) {
	vector<string> str;
	for (vector<int>::iterator iter = nums.begin(), tag = nums.begin(); iter != nums.end(); iter++)
		if (iter + 1 != nums.end())
		{
		if (*iter + 1 < *(iter + 1))
		{
			str.push_back(format(*tag, *iter));
			tag = iter + 1;
		}
		}
		else
		{
			str.push_back(format(*tag, *iter));
			tag = iter + 1;
		}
	return str;
}

// vector��Ϊ����ֵ ֱ�ӷ��ز���Ҫ����
// string��Ϊvector������� stringͷ�ļ�����ֱ��cout��� 
// string�ĸ�ֵ 
// ΪʲôҪ��else �������޷�֪��else���ĸ�if���
int main()
{
	vector<int> v(1, 1);
	for (int i = 1; i < 10; i++)
		v.push_back(i);
	
	vector<string> ss;
	ss = summaryRanges(v);
	for (int i = 0; i < ss.size(); i++)
		cout <<i<<" "<< ss[i] << endl;
	system("pause");
}