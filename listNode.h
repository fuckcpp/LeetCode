#pragma once
#include<iostream>
using namespace std;
struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int a) :val(a), next(NULL) {};//结构体也有构造函数？										   //ListNode(int a, ListNode* p) :val(a), next(p) {};//结构体也有构造函数？
};