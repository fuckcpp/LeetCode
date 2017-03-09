#include "two_sum.h"
vector<int> twoSum(vector<int>& nums, int target) 
{
	vector<int> temp;
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i+1; j < nums.size(); j++)
		{
			if (nums[i] + nums[j] == target)
			{
				temp.push_back(i);
				temp.push_back(j);
			}
		}
	}
	return temp;
};

void test_twoSum()
{
	vector<int> nums{ 3, 2, 4 };
	int target = 6;
	vector<int> temp=twoSum(nums, target);
	vector<int>::iterator it;
	for (it = temp.begin(); it != temp.end(); it++)
	{
		cout << *it<< endl;
	}

};