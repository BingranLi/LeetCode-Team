#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
	vector<int>::iterator iter2;
	for (vector<int>::iterator iter = nums.begin(); iter != nums.end(); )
	{
		if (val == *iter)
		{
			iter2 = nums.erase(iter);
			//cout << "fdf " << *iter << endl;
			iter = iter2;
		}
		else
			iter++;
		
	}
	//swap(  *iter2   ,*iter2++   ); 
	return nums.size();
	//  method 2
	//	int n = nums.size();
	//	int i = 0;
	//	while (i < n) {
	//		if (nums[i] == val) {
	//			swap(nums[i], nums[n - 1]);
	//			n--;
	//		}
	//		else {
	//			i++;
	//		}
	//	}
	//	return n;
	//}
}
// ִ��erase�����󣬲��ܶ�ȡ����������
// erase����ָ����ɾ��Ԫ����һ��λ�õĵ�����
// vector.swap��ʹ�� ����vectorԪ�صĽ��� �����ڴ��ͷ�
// ��׼swap �����������Ͳ���

int main()
{
	vector<int> v(1, 1),v2(2,2);
	for (int i = 0; i < 10; i++)
		v.push_back(i);
	//v.swap(v2);
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
	cout << " " << removeElement(v, 1) << endl; for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
	system("pause");
}