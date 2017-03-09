#pragma once
#include"listNode.h"
/*
Write a program to find the node at which the intersection of two singly linked lists begins.

	For example, the following two linked lists:

	A:          a1 ¡ú a2
						¨K
						  c1 ¡ú c2 ¡ú c3
						¨J
	B:    b1 ¡ú b2 ¡ú b3
	begin to intersect at node c1.

Notes:

If the two linked lists have no intersection at all, return null.
The linked lists must retain their original structure after the function returns.
You may assume there are no cycles anywhere in the entire linked structure.
Your code should preferably run in O(n) time and use only O(1) memory.
Credits:
Special thanks to @stellari for adding this problem and creating all test cases.
*/
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
{

}
/*
	¸ã²»¶¨
*/
/*
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
	if (!headA || !headB) return NULL;
	ListNode *ptrA = headA;
	ListNode *ptrB = headB;
	int sizeA, sizeB = 1;
	int sizeHalf = 0;
	while (ptrA->next)
	{
		sizeA++;
		ptrA = ptrA->next;
	}
	while (ptrB->next)
	{
		sizeB++;
		ptrB = ptrB->next;
	}
	if (ptrA != ptrB) return NULL;
	sizeHalf = sizeA < sizeB ? sizeA : sizeB;
	int count = 0;
	while (ptrA==ptrB)
	{
		sizeHalf /= 2;
		count = 0;
		while (count<(sizeA- sizeHalf))
		{
			count++;
			ptrA = ptrA->next;
		}
		count = 0;
		while (count<(sizeB - sizeHalf))
		{
			count++;
			ptrB = ptrB->next;
		}
	}

}
*/
