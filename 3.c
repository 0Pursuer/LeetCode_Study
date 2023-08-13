//#include<stdio.h>
////ÊäÈë£ºl1 = [2, 4, 3], l2 = [5, 6, 4]
////Êä³ö£º[7, 0, 8]
////½âÊÍ£º342 + 465 = 807.
//struct ListNode {
//	int val;
//	struct listNode* next;
//};

//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
//	int r = 0;
//	struct ListNode* l3=(struct ListNode*)malloc(sizeof(struct ListNode));
//	l3->next=NULL;
//	struct ListNode* p = l3->next, *q1=l1, *q2=l2;
//	while (q1 != NULL && q2 != NULL) {
//		p = (struct ListNode*)malloc(sizeof(struct ListNode));
//		p->next = NULL;
//		p->val = (q1->val + q2->val+r)%10;
//		r = (q1->val + q2->val + r) / 10;
//		q1 =q1->next;
//		q2 = q2->next;
//		p = p->next;
//	}
//	while (q1 != NULL) {
//		p = (struct ListNode*)malloc(sizeof(struct ListNode));
//		p->next = NULL;
//		p->val = (q1->val+ r) % 10;
//		r = (q1->val + r) / 10;
//		q1 = q1->next;
//		p = p->next;
//	}
//	while (q2 != NULL) {
//		p = (struct ListNode*)malloc(sizeof(struct ListNode));
//		p->next = NULL;
//		p->val = (q2->val + r) % 10;
//		r = (q2->val + r) / 10;
//		q2 = q2->next;
//		p = p->next;
//	}
//	if (r) {
//		p = (struct ListNode*)malloc(sizeof(struct ListNode));
//		p->next = NULL;
//		p->val = (r) % 10;
//		p = p->next;
//	}
//	p = l3->next;
//	free(l3);
//	return p;
//}
