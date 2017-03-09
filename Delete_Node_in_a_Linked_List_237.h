#pragma once
#include"listNode.h"
/*
Write a function to delete a node(except the tail) in a singly linked list, given only access to that node.
Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, the linked list 
should become 1 -> 2 -> 4 after calling your function.
*/
/*
	ֻ���������е�һ���ڵ㣬��ɾ���ýڵ㣬ʵ���ϣ��ýڵ��������ϲ����Ա�ɾ��
	��Ϊ�Ҳ�������һ���ڵ㡣����ֻ�ܰ���һ���ڵ��ֵ�ƶ�������Ȼ��ɾ����һ���ڵ�
*/
void deleteNode(ListNode* node) {
	ListNode* nex = node->next;
	node->val = nex->val;
	node->next = nex->next;
	free(nex);
}
/*
	��������֮ �ڵ���ȫ�滻��ȡ��ֵ��ָ��ֱ��滻
*/
void deleteNode_better(ListNode* node) {
	auto next = node->next;
	*node = *next;
	delete next;
}