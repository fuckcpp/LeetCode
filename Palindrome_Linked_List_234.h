#pragma once
#include"listNode.h"
/*
Given a singly linked list, determine if it is a palindrome.

Follow up:
Could you do it in O(n) time and O(1) space?
����벿�ַ�ת�������벿һһ�Ա�

*/

ListNode* reverseList_iteratively(ListNode* head) {
	ListNode *hold = NULL;
	ListNode *next = head;
	while (head)
	{
		next = next->next;
		head->next = hold;
		hold = head;
		head = next;
	}
	return hold;
}
bool isPalindrome(ListNode* head) {
	if (!head || !head->next)
		return true;
	int count = 0;
	ListNode* ptr = head;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	ListNode* ptr_2 = head;
	for (int i = 1; i < count / 2; i++)//�ƶ�i-1�ε�iλ�ã�
	{
		ptr_2 = ptr_2->next;
	}
	if (count % 2 == 1) 
		ptr_2 = ptr_2->next->next;
	else
		ptr_2 = ptr_2->next;
	ptr_2 = reverseList_iteratively(ptr_2);
	for (int i = 0; i < count / 2; i++)
	{
		if (head->val != ptr_2->val)
		return false;
		head = head->next;
		ptr_2 = ptr_2->next;
	}
	return true;

}