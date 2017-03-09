#pragma once
#include"listNode.h"
/*
	1�������ƶ���ʱ��ֻ����ptr=ptr->next������++
	2��ָ������ʼ�������ã������ȳ�ʼ��ΪNULL,NULL��std��
	3�����ǵ����е��������
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
				ptr1 = ptr1->next;//�����ƶ������벻����++
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
/*  ��������֮mergeTwoLists whin 14 line
	1��INT_MIN ��С���͵ĺ�
	2���ж�ָ���ʱ���Ƿ�ΪNULL��ʱ��if(ptr) ��ʤ if(ptr == NULL)
	3����Ҫ���ǵ����е����������������Щ�������һ���������Ľ����������д����
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