#include"Roman_to_Integer.h"
int romanToInt(string s) 
{   //I（代表1）、V（代表5）、X（代表10）、L（代表50）、C代表100）、D（代表500）、M（代表1,000）
	//range from 1 to 3999 MMMIM
	//Ⅰ, 1 】Ⅱ, 2】 Ⅲ, 3】 Ⅳ, 4 】Ⅴ, 5 】Ⅵ, 6】Ⅶ, 7】 Ⅷ, 8 】Ⅸ, 9 Ⅹ, 10】 Ⅺ, 11 】Ⅻ, 12】 XIII, 13】 XIV,
    //14】 XV, 15 】XVI, 16 】XVII, 17 】XVIII, 18】 XIX, 19】 XX, 20】 XXI, 21 】XXII, 22 】XXIX, 29】 XXX, 30】
	map<char, int> roman_int = {
		                       {'I',1},
							   {'V',5},
							   {'X',10},
							   {'L',50},
							   {'C',100},
							   {'D',500},
							   {'M',1000}
	                                   };

	string::iterator it;
	map<char,int>::iterator it_map;
	int pre = 0;
	int result = 0;
	for (it = s.begin(); it != s.end(); it++)
	{
		it_map = roman_int.find(*it);
		if (it_map != roman_int.end())
		{
			//cout << it_map->first<<":"<<it_map->second<< endl;
			if (pre < it_map->second)
			{
				result -= pre;
			}
			else
			{
				result += pre;
			}
			pre = it_map->second;
		}
	}
	result += pre;
	//cout <<  "result " << result << endl;
	return result;
}