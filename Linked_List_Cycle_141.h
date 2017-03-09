#pragma once
#include"listNode.h"
/*
	Given a linked list, determine if it has a cycle in it.
	Follow up:
	Can you solve it without using extra space?
*/
bool hasCycle(ListNode *head) {
	ListNode* ptr1 = head;
	ListNode* ptr2 = head;
	bool result = false;
	while (ptr1&&ptr2)
	{
		if (ptr2->next==ptr1){
			result = true;
			break;
		}
		ptr1 = ptr1->next;
		if(ptr2 = ptr2->next)//下一个不是NULL才能继续下一个  NULL不能next  
			ptr2 = ptr2->next;
	}
	return result;
}
/*
	高下立判之抽象出最本质的判断条件最重要
*/
bool hasCycle_better(ListNode *head) {
	ListNode* ptr1 = head;
	ListNode* ptr2 = head;
	bool result = false;
	while (ptr2->next&&ptr2->next->next)//这个判断条件更好一些，更易懂一些
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next->next;
		if (ptr2 == ptr1) {
			result = true;
			break;
		}
	}
	return result;
}