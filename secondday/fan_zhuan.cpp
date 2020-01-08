#include<string.h>
#include<stdlib.h>
#include <winsock2.h>
struct ListNode* rotateRight(struct ListNode* head, int k)
{
	struct ListNode *p;
	struct ListNode *q;
	p = (struct ListNode*)malloc(sizeof(struct ListNode));
	q = (struct ListNode*)malloc(sizeof(struct ListNode));

	int n = 1;
	int m = 1;
	int l;
	p = head;

	if (head == NULL || k == 0) return head;
	while (head->next != NULL)
	{
		head = head->next;
		m++;
	}
	head->next = p;
	l = m - k%m;
	for (; n<l; n++)
	{
		p = p->next;
	}
	q = p->next;
	p->next = NULL;

	return q;
}