//#include<stdio.h>//ע����ַ���s���кϷ��Լ�飬���sΪ�ջ��߳���Ϊ0�����ܻᵼ�³����������
//#include<stdlib.h>
//char* longestPalindrome(char* s) {//ʵ�ֽ��ַ���s�е��������Ӵ���ȡ������Ȼ�󷵻ظ��ִ�����Ԫ�ص�ַ
//	int front = 0, rear = 0, f = 0, r = 0;//f��r�ֱ�����������ַ�������β���;front,rear���ڡ��ж��Ƿ�Ϊ�����ַ���ʱ������
//	for (int i = 0; s[i] != '\0'; i++) {//����s�ַ���
//		
//		if (s[i] == s[i + 1]) {//�����������Ԫ����ȣ�ʹ��front��rear�����߱���������"asdsa"���Ĵ�
//			front = i;
//			rear = i + 1;
//			while (front - 1 >= 0 && s[rear + 1] != '\0' && s[front - 1] == s[rear + 1]) {
//				front--;
//				rear++;
//			}
//			if ((r - f) < (rear - front)) {//����r,f
//				r = rear;
//				f = front;
//			}
//		}
//		if (s[i] == s[i + 2]) {//ʹ��front��rear�����߱���������"asddsa"���Ĵ�
//			front = i;
//			rear = i + 2;
//			while (front - 1 >= 0 && s[rear + 1] != '\0' && s[front - 1] == s[rear + 1]) {
//				front--;
//				rear++;
//			}
//			if ((r - f) < (rear - front)) {//����r,f
//				r = rear;
//				f = front;
//			}
//		}
//
//		
//	}
//	char* data = (char*)malloc(sizeof(char) * (r - f + 2));//����һ���ַ�������data
//	int i = 0;
//	while (f <= r)//������������Ƶ�data��
//		data[i++] = s[f++];
//	data[i] = '\0';
//	return data;
//}
//char* longestPalindrome1(char* s) {
//	int front = 0, rear = 0, maxLen = 1;
//	int len = 0, start = 0, end = 0;
//
//	for (int i = 0; s[i] != '\0'; i++) {
//		// ż�����Ȼ����Ӵ�
//		front = i;
//		rear = i + 1;
//		while ( front >= 0 && s[rear] != '\0' && s[front] == s[rear]) {
//			len = rear - front + 1;
//			if (len > maxLen) {
//				maxLen = len;
//				start = front;
//				end = rear;
//			}
//			front--;
//			rear++;
//		}
//
//		// �������Ȼ����Ӵ�
//		front = i - 1;
//		rear = i + 1;
//		while (front >= 0 && s[rear] != '\0' && s[front] == s[rear]) {
//			len = rear - front + 1;
//			if (len > maxLen) {
//				maxLen = len;
//				start = front;
//				end = rear;
//			}
//			front--;
//			rear++;
//		}
//	}
//
//	char* longest = (char*)malloc(sizeof(char) * (maxLen + 1)); // ���1���ռ�洢������
//	int idx = 0;
//	for (int i = start; i <= end; i++) {
//		longest[idx++] = s[i];
//	}
//	longest[idx] = '\0'; // ��ӽ�����
//
//	return longest;
//}
//
//
//int main() {
//	char s[] = "aa";
//	char* data = longestPalindrome(s);
//	char* data1 = longestPalindrome1(s);
//	printf("%s\n", data);
//	printf("%d\n",sizeof(data));//ָ��Ĵ�С
//	printf("%d\n", strlen(data));
//	printf("%d\n", strlen(data1));
//	return 0;
//}