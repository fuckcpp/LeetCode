#pragma once
#include"listNode.h"
/*
	1、链表移动的时候，只能用ptr=ptr->next；不是++
	2、指针必须初始化才能用，可以先初始化为NULL,NULL在std里
	3、考虑到所有的特殊情况
*/
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	ListNode* ptr1 = l1;
	ListNode* ptr2 = l2;
	ListNode* hold = NULL;
	ListNode* head = NULL;
	int tag = 0;
	if (ptr1 == NULL && ptr2 == NULL)
		return NULL;
	else if (ptr1 == NULL&&ptr2 != NULL)
		head = ptr2;
	else if (ptr1 != NULL&&ptr2 == NULL)
		head = ptr1;
	else {
		if (ptr1->val<ptr2->val)
		{
			head = ptr1; ptr1 = ptr1->next;
		}
		else
		{
			head = ptr2; ptr2 = ptr2->next;
		}
		hold = head;
		while (ptr1 != NULL && ptr2 != NULL)
		{
			if (ptr1->val<ptr2->val)
			{
				hold->next = ptr1;
				ptr1 = ptr1->next;//链表移动，必须不能用++
			}
			else
			{
				hold->next = ptr2;
				ptr2 = ptr2->next;
			}
			hold = hold->next;
		}
		if (ptr1 != NULL) hold->next = ptr1;
		else hold->next = ptr2;
	}
	return head;
}
/*  高下立判之mergeTwoLists whin 14 line
	1、INT_MIN 最小整型的宏
	2、判断指针的时候是否为NULL的时候，if(ptr) 完胜 if(ptr == NULL)
	3、需要考虑到所有的特殊情况，但是这些特殊情况一般可以巧妙的解决，所以先写主体
*/
ListNode *mergeTwoLists_better(ListNode *l1, ListNode *l2) {
	ListNode dummy(INT_MIN);
	ListNode *tail = &dummy;

	while (l1 && l2) {
		if (l1->val < l2->val) {
			tail->next = l1;
			l1 = l1->next;
		}
		else {
			tail->next = l2;
			l2 = l2->next;
		}
		tail = tail->next;
	}

	tail->next = l1 ? l1 : l2;
	return dummy.next;
}