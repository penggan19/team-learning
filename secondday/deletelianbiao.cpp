#include<string.h>
#include<stdlib.h>
#include <winsock2.h>
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
	struct ListNode *dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
	dummy->val = 0;
	dummy->next = head;

	struct ListNode *fast, *low;
	fast = low = dummy;
	while (n > 0) {
		fast = fast->next;
		n--;
	}
	while (fast->next != NULL) {
		low = low->next;
		fast = fast->next;
	}

	low->next = low->next->next;

	return dummy->next;

}