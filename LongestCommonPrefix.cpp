#include "LongestCommonPrefix.h"

inline int minStr(string &s1,string &s2)
{
	return (s1.size() > s2.size()) ? s2.size() : s1.size();
};
string longestCommonPrefix(vector<string>& strs) 
{
	string theLongest="";
	int longest=0;
	vector<string>::iterator it_first;
	vector<string>::iterator it_second;
	int minStrSize;
	theLongest = *strs.begin();
	for (it_first = strs.begin(); it_first != strs.end(); it_first++)
	{
		for (it_second = it_first+1; it_second != strs.end(); it_second++)
		{
			minStrSize = minStr(*it_first, *it_second);
			string temp;
			for (int i = 0; i < minStrSize; i++)
			{
				if ((*it_first).substr(i, 1) ==(*it_second).substr(i, 1))
				{
					temp.append((*it_first).substr(i, 1));
				}
				else break;
			}
			if (temp.size() > longest)
			{
				theLongest = temp;
				longest = temp.size();
			}
		}
	}
	return theLongest;

}

string longestCommonPrefix_Leetcode(vector<string>& strs) {
	string prefix = "";
	for (int idx = 0; strs.size()>0; prefix += strs[0][idx], idx++)
		for (int i = 0; i<strs.size(); i++)
			if (idx >= strs[i].size() || (i > 0 && strs[i][idx] != strs[i - 1][idx]))
				return prefix;
	return prefix;
}
void testlongestCommonPrefix()
{
	vector<string> str = {  { "asdfghjkl" },
							{ "qwertyuiop" },
							{ "zxcvbnm" },
							{ "asdcvbnm" },
							{ "asdrtyuiop" },
							{ "asdftbnm" },
							{ "asdfgbnm" } };
	vector<string> str1 = { {"a"} };
	vector<string> str2 = { { "" } };
	cout << longestCommonPrefix(str2) << endl;
};
