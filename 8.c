//�ַ���ת��Ϊ������ģ��atoi����
//���룺s = "4193 with words"
//�����4193
//#include<stdio.h>
//#include<limits.h>
//int myAtoi(char* s) {
//	int index = 0, tag = 0;
//	//�жϿո�
//	while (s[index] == ' ')
//		index++;
//	//�жϷ���
//	if (s[index] == '+' || s[index] == '-') {
//		if (s[index] == '-')
//			tag = 1;
//		index++;
//	}
//	//��ȡ����
//	double sum = 0;
//	while (s[index] >= '0' && s[index] <= '9') {
//		sum += s[index] - '0';
//		//�жϷ�Χ
//		if (sum > INT_MAX)
//			sum = INT_MAX;
//		if (sum < INT_MIN)
//			sum = INT_MIN;
//		if (s[index + 1] >= '0' && s[index + 1] <= '9')
//			sum *= 10;
//		index++;
//	}
//	if (tag == 1)
//		sum = 0 - sum;
//	return (int)sum;
//}
//int main() {
//	char arr[] = "  -42";
//	int i = myAtoi(arr);
//	printf("%d\n",i);
//	return 0;
//}
