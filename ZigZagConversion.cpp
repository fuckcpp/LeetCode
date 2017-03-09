#include "ZigZagConversion.h"

void initialZigzag(vector<vector<char> > &zigzag, int numRows, int &numLines,int len,int nums)
{
	int zagNum = nums / 2;
	int zigNum;
	int zigzagSch = 0;
	if (nums % 2 == 1)
		zigNum = zagNum + 1;
	else
		zigNum = zagNum;
	cout << "zig" << zigNum << " " << "zag" << zagNum << endl;

	/*ֱ��ģ��numRows - 1��*2 ������������*/
	if (zigNum == zagNum)//������zig  zag��ȣ����һ��zig
	{
		numLines = (numRows - 1)*zagNum + 1;
	}
	else//zig ��zag���ȣ�����zag����ʣ�µ�λ��
	{
		int temp = len - (zagNum + zigNum)*(numRows - 1);
		if (temp>(numRows - 1))
			numLines = (numRows - 1)*zagNum + 1 + temp - 1;
		else
			numLines = (numRows - 1)*zagNum + 1;
	}

	cout << zigNum << " " << zagNum << endl;
	zigzag.resize(numRows);

	for (int i = 0; i < numRows; i++)
	{
		zigzag[i].resize(numLines);
		for (int j = 0; j < numLines; j++)
			cout << zigzag[i][j] << " ";
		cout << endl;
	}
}

void drowZigzag(vector<vector<char> > &zigzag,string &s,int nums, int numRows) {

	int x_index = 0;
	int y_index = 0;
	int s_ptr = 0;
	for (int zigzagPtr = 0; zigzagPtr < nums; zigzagPtr++)
	{
		if (zigzagPtr % 2 == 0)//ż�������ŵģ�������б�ŵ�
		{
			while (y_index < (numRows - 1))
			{
				zigzag[y_index++][x_index] = s[s_ptr++];
			}
		}
		else
		{
			while (y_index > 0)
			{
				zigzag[y_index--][x_index++] = s[s_ptr++];
			}
		}
	}
}
void printZigzag(vector<vector<char> > &zigzag, string &result, int numLines, int numRows)
{
	for (int i = 0; i < numRows; i++)
	{
		zigzag[i].resize(numLines);
		for (int j = 0; j < numLines; j++)
		{
			//result.append(zigzag[i][j]);
			if (zigzag[i][j] != NULL)
				result += zigzag[i][j];
			cout << zigzag[i][j] << " ";
		}
		cout << endl;
	}

	cout << result << endl;
};
string convert(string s, int numRows) 
{

	int len = s.length();
	cout << len << " " << endl;
	vector<vector<char> > zigzag;
	int nums = len / (numRows - 1);//������ zig zag����

	int numLines = 0;//Zigzag��ά��������
	string result;
	initialZigzag(zigzag, numRows, numLines, len, nums);
	
	/*drowZigzag(zigzag, s, nums, numRows);//��stringд��zigzag������
	printZigzag(zigzag, result, numLines, numRows);//��zigzag����ת��Ϊһ��string
	*/
	return result;

};

void test_convert()
{
	//string s = "abcdefghijklmnopqrstuvwxyz";
	string s = "a";
	convert(s, 3);
};