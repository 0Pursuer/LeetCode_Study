//#include<stdbool.h>
//#include<stdio.h>
////�ж��Ƿ������
//// �ж����xΪ�������ǣ����Ϊ10�ı���Ҳ���ǣ����Ϊ��λ������
////1����ȡһ������֣���ԭ���ֱȽϣ����Ƿ���ȡ�
////sum+=x%10ͬʱx/10;
////�Ƚ�sum��x��x/10��С�������������Ϊ������,���������ǻ���������С����sum*=10����ѭ��
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