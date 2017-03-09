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
		if(ptr2 = ptr2->next)//��һ������NULL���ܼ�����һ��  NULL����next  
			ptr2 = ptr2->next;
	}
	return result;
}
/*
	��������֮�������ʵ��ж���������Ҫ
*/
bool hasCycle_better(ListNode *head) {
	ListNode* ptr1 = head;
	ListNode* ptr2 = head;
	bool result = false;
	while (ptr2->next&&ptr2->next->next)//����ж���������һЩ�����׶�һЩ
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