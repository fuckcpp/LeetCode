#pragma once
#include"listNode.h"
/*
Write a function to delete a node(except the tail) in a singly linked list, given only access to that node.
Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, the linked list 
should become 1 -> 2 -> 4 after calling your function.
*/
/*
	只给出链表中的一个节点，让删除该节点，实际上，该节点在物理上不可以被删除
	因为找不到其上一个节点。所以只能把下一个节点的值移动过来，然后删除下一个节点
*/
void deleteNode(ListNode* node) {
	ListNode* nex = node->next;
	node->val = nex->val;
	node->next = nex->next;
	free(nex);
}
/*
	高下立判之 节点完全替换，取代值和指针分别替换
*/
void deleteNode_better(ListNode* node) {
	auto next = node->next;
	*node = *next;
	delete next;
}