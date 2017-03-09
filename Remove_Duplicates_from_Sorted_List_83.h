#pragma once
#include"listNode.h"
ListNode* deleteDuplicates(ListNode* head) {
	ListNode* ptr = head;
	ListNode* ptr_next;
	while (ptr!=NULL)
	{
		ptr_next = ptr->next;
		if (ptr_next != NULL&&ptr->val == ptr_next->val)
		{
			ptr->next = ptr_next->next;
			delete ptr_next;
		}
		else
		ptr = ptr->next;
	}
	return head;
}