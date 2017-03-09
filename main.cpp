#include <iostream>
//#include<stdlib.h>
#include"before.h"
#include"array.h"
#include"linked_list.h"
using namespace std;

int main()
{
	ListNode *ptr= NULL;
	ListNode *ptr2 = NULL;
	for (int i = 20; i >=0; i--)
	{
			ListNode *p = new ListNode(i>=10?20-i:i);
			p->next = ptr;
			ptr = p;
	}
	//deleteNode_better(ptr2);
	
	bool re = isPalindrome(ptr);

	while (ptr&&re)
	{
		cout << ptr->val << " ";
		ptr = ptr->next;
	}
	getchar();
	return 0;
}