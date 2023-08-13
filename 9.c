//#include<stdbool.h>
//#include<stdio.h>
////判断是否回文数
//// 判断如果x为负数则不是，如果为10的倍数也不是，如果为个位数则是
////1、提取一半的数字，与原数字比较，看是否相等。
////sum+=x%10同时x/10;
////比较sum与x、x/10大小，若存在相等则为回文数,若大于则不是回文数，若小于则sum*=10继续循环
//bool isPalindrome(int x) {
//	if (x < 0)
//		return false;
//	if (x >= 0 && x <= 9)
//		return true;
//	if (x % 10 == 0)
//		return false;
//	int sum = 0;
//	while (sum <= x) {
//		if (((sum == x) || (sum == x / 10)))
//			return true;
//		sum *= 10;
//		sum += x % 10;
//		x /= 10;
//	}
//	return false;
//}
//int main() {
//	int a = 21120;
//	int q = isPalindrome(a);
//	printf("%d\n", q);
//	return 0;
//}