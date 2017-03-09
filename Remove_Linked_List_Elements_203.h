#pragma once
#include"listNode.h"
/*
Remove all elements from a linked list of integers that have value val.

Example
Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6
Return: 1 --> 2 --> 3 --> 4 --> 5

Credits:
Special thanks to @mithmatt for adding this problem and creating all test cases.
*/
ListNode* removeElements(ListNode* head, int val) {
	if (!head)
		return NULL;
	while (head&&head->val == val)//�ж������������Ҫȡ�ڵ��е����ݣ�һ��Ҫ���ж�ָ���Ƿ�ΪNULL
	{
		ListNode* next = head->next;
		delete head;
		head = next;
	}
	ListNode* begin = head;
	while (begin)
	{
		ListNode* next = begin->next;
		if (next&&next->val == val){//�ж������������Ҫȡ�ڵ��е����ݣ�һ��Ҫ���ж�ָ���Ƿ�ΪNULL
			begin->next = next->next;
			delete next;
		}
		else
		begin = begin->next;
	}
	return head;
}