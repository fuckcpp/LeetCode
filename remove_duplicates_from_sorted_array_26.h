#pragma once
#include<iostream>
#include<vector>
using namespace std;
/*
�Ƴ������������ظ����ֵ�Ԫ�أ��������������ĳ���
vector��erase()�����֣�1Ϊiterator erase(iterator);ɾ��it����Ԫ�أ��������¸�һλ�õ�it
2Ϊiterator erase(iterator it1,it2)ɾ��it1��it2֮���Ԫ�أ����ҷ���it2֮���it
*/

int removeDuplicates(vector<int>& nums) {
	if (nums.size() != 0) {
		vector<int>::iterator it = nums.begin();
		int temp = *it - 1;
		while (it != nums.end())
		{
			cout << *it << endl;
			if (*it == temp) it = nums.erase(it);
			else { temp = *it; it++; }
		}
	}
	return nums.size();
}