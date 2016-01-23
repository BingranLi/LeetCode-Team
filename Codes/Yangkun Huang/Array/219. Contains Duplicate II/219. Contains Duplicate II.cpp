#include<iostream>
#include<vector>
#include<set>
#include<map>

using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
	map<int, int>int_map;
	map<int, int>::iterator iter;
	for (int i = 0; i<nums.size(); i++) 
	{
		if ((iter = int_map.find(nums[i])) != int_map.end())
		{
			if (i - iter->second <= k) 
				return true;
			else
				int_map.erase(iter);
		}
		int_map.insert(pair<int, int>(nums[i], i));
	}
	return false; 
	//for (vector<int>::iterator i = nums.begin(); i != nums.end(); i++)
	//	for (vector<int>::iterator iter = i+1; iter <i + k; iter++)
	//		if (*i == *iter)
	//			return true;
	//return false;
}

// set�ὫԪ������
// equal_range ����һ������������Ԫ�ص�pair����
// ������ת����������� ��ת��λ�ò��䣬��ת����ĩβ��һλ
int main()
{
	vector<int> v;
	/*for (int i = 0; i < 10; i++)
		 v.push_back(i);*/
	v.push_back(1); v.push_back(2); v.push_back(1);
	for (int i = 0; i < v.size(); i++)
	cout << v[i] << endl;
	cout << containsNearbyDuplicate(v, 1) << endl;

	system("pause");
}