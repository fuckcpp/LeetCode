#include"reverse_Integer.h"
int reverse(int x) 
{
	int temp;
	int x_copy = x;
	if (x < 0)
		x = -x;
	int x_target=0;
	string s_target;
	vector<int> pre_str;
	bool is_num = false;
	while(x!=0)
	{
		temp = x % 10;
		x = x / 10;
		if (temp != 0)
		{
			pre_str.push_back(temp);
			is_num = true;
		}
		else if (is_num ==true) {
			pre_str.push_back(temp );
		}
	}
	vector<int>::iterator it;
	char c='c';
	int i;
	for (it = pre_str.begin(); it != pre_str.end(); it++)
	{
		if(x_target<214748365)
		x_target *= 10;
		else return 0;
		x_target += *it;
	}
	if (x_copy < 0)
		x_target = -x_target;		
		return x_target;
}
int reverse_LET(int x) {
	long long res = 0;//��ת���Ĺ����У��п��ܳ���int�ı�ʾ��Χ�������ø���Χ������
	while (x) {
		res = res * 10 + x % 10;
		x /= 10;
	}
	return (res<INT_MIN || res>INT_MAX) ? 0 : res;//�ڷ��ص�ʱ��ʵ������������ת��
}