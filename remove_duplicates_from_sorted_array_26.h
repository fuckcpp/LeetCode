#pragma once
#include<iostream>
#include<vector>
using namespace std;
/*
移除升序数组中重复出现的元素，并返回数组最后的长度
vector的erase()有两种，1为iterator erase(iterator);删除it处的元素，并返回下个一位置的it
2为iterator erase(iterator it1,it2)删除it1到it2之间的元素，并且返回it2之后的it
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