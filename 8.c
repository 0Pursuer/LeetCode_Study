//字符串转换为整数，模拟atoi函数
//输入：s = "4193 with words"
//输出：4193
//#include<stdio.h>
//#include<limits.h>
//int myAtoi(char* s) {
//	int index = 0, tag = 0;
//	//判断空格
//	while (s[index] == ' ')
//		index++;
//	//判断符号
//	if (s[index] == '+' || s[index] == '-') {
//		if (s[index] == '-')
//			tag = 1;
//		index++;
//	}
//	//获取数字
//	double sum = 0;
//	while (s[index] >= '0' && s[index] <= '9') {
//		sum += s[index] - '0';
//		//判断范围
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
