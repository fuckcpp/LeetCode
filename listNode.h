#pragma once
#include<iostream>
using namespace std;
struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int a) :val(a), next(NULL) {};//�ṹ��Ҳ�й��캯����										   //ListNode(int a, ListNode* p) :val(a), next(p) {};//�ṹ��Ҳ�й��캯����
};