//#include<stdio.h>//注意对字符串s进行合法性检查，如果s为空或者长度为0，可能会导致程序出现问题
//#include<stdlib.h>
//char* longestPalindrome(char* s) {//实现将字符串s中的最大回文子串提取出来，然后返回该字串的首元素地址
//	int front = 0, rear = 0, f = 0, r = 0;//f，r分别用来存回文字符串的首尾序号;front,rear用于“判断是否为回文字符串时”遍历
//	for (int i = 0; s[i] != '\0'; i++) {//遍历s字符串
//		
//		if (s[i] == s[i + 1]) {//如果出现相邻元素相等，使用front和rear往两边遍历，例如"asdsa"回文串
//			front = i;
//			rear = i + 1;
//			while (front - 1 >= 0 && s[rear + 1] != '\0' && s[front - 1] == s[rear + 1]) {
//				front--;
//				rear++;
//			}
//			if ((r - f) < (rear - front)) {//更新r,f
//				r = rear;
//				f = front;
//			}
//		}
//		if (s[i] == s[i + 2]) {//使用front和rear往两边遍历，例如"asddsa"回文串
//			front = i;
//			rear = i + 2;
//			while (front - 1 >= 0 && s[rear + 1] != '\0' && s[front - 1] == s[rear + 1]) {
//				front--;
//				rear++;
//			}
//			if ((r - f) < (rear - front)) {//更新r,f
//				r = rear;
//				f = front;
//			}
//		}
//
//		
//	}
//	char* data = (char*)malloc(sizeof(char) * (r - f + 2));//创建一个字符串数组data
//	int i = 0;
//	while (f <= r)//将最长回文数复制到data中
//		data[i++] = s[f++];
//	data[i] = '\0';
//	return data;
//}
//char* longestPalindrome1(char* s) {
//	int front = 0, rear = 0, maxLen = 1;
//	int len = 0, start = 0, end = 0;
//
//	for (int i = 0; s[i] != '\0'; i++) {
//		// 偶数长度回文子串
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
//		// 奇数长度回文子串
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
//	char* longest = (char*)malloc(sizeof(char) * (maxLen + 1)); // 添加1个空间存储结束符
//	int idx = 0;
//	for (int i = start; i <= end; i++) {
//		longest[idx++] = s[i];
//	}
//	longest[idx] = '\0'; // 添加结束符
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
//	printf("%d\n",sizeof(data));//指针的大小
//	printf("%d\n", strlen(data));
//	printf("%d\n", strlen(data1));
//	return 0;
//}