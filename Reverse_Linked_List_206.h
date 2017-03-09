#pragma once
#include"listNode.h"
/*
Reverse a singly linked list.

Hint:
A linked list can be reversed either iteratively or recursively. Could you implement both
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
/*
	头递归相当于保存了每一个节点
*/
ListNode* reverseList_recursively(ListNode* head) {

	if (!head || !head->next) return head;
	ListNode* node=reverseList_recursively(head->next);

	head->next->next = head;
	head->next = NULL;
	return node;
}