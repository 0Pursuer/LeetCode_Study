//13.罗马数字转整数
//从左往右扫描如果左边数更大，相加，如果更小，则相减
#include<stdio.h>
enum Romandata {
	M = 1000,
	D = 500,
	C = 100,
	L = 50,
	X = 10,
	V = 5,
	I = 1

};
enum Romandata s2e(char str)
{
	if (str == 'M')  return M;
	if (str == 'D')  return D;
	if (str == 'C')  return C;
	if (str == 'L')  return L;
	if (str == 'X')  return X;
	if (str == 'V')  return V;
	if (str == 'I')  return I;
}

int RomanToInt(char* s) {
	
	int i = 0,j=0,k=0, sum = 0;
	while (s[i + 1] != '\0') {
		j = s2e(s[i]);
		k = s2e(s[i + 1]);
		if (j >=k)
			sum += j;
		else
			sum -= j;
		i++;
	}
	sum += s2e(s[i]);
	return sum;
}



//int RomanToInt(char* s) {
//	//int idata[7] = { 1000,500,100,50,10,5,1 };
//	//char rdata[] = "MDCLXVI";
//	int i = 0, j = 0,k=0, sum = 0;
//	while (s[i + 1] != '\0') {
//		if (s[i] == rdata[j]) {
//			while()
//			if (s[i] >= s[i + 1])//不能直接比较？
//				sum += idata[j];
//			else
//				sum -= idata[j];
//			i++;
//		}
//		j++;
//	}
//	return sum;
//}
int main() {
	char a[] = "LVIII";
	printf("%d", RomanToInt(a));
	//printf("%c", a[1]);
	return 0;
}
//用常量enum