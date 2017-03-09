#pragma once
#include<iostream>
#include<vector>
using namespace std;
/*不要忘记vector 的erase在删除完元素之后，会直接下移一位*/
int removeElement(vector<int>& nums, int val) {
	if (nums.size() == 0)return 0;
	vector<int>::iterator it = nums.begin();
	while (it != nums.end())
	{
		if (*it == val)
			it = nums.erase(it);
		else
			it++;
	}
	return nums.size();
}