//整数转罗马数字
//
#include<stdio.h>
//#include<stdlib.h>
//char* intToRoman(int num) {
//	int idata[13] = { 1000,900,500,400,100,90,50,40,10,9,5,4,1 };
//	char* rdata[13] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };
//	int i = 0, j = 0,k=0;
//	char* p[17];
//	char* ptr = (char*)malloc(sizeof(char)*13);
//	while (num > 0) {
//		while (num < idata[i])
//			i++;
//		
//		p[j++] = rdata[i];
//		num -= idata[i];
//	}
//	printf("%d\n", j);
//	p[j] = NULL;
//	for (i = 0; p[i] != NULL; i++) {
//		for (j = 0; *(p[i] + j) != '\0'; j++)
//			*(ptr + (k++)) = *(p[i] + j);
//	}
//	*(ptr + k) = '\0';
//	return ptr;
//}
//int main() {
//	int num = 1888;
//	char* ptr = intToRoman(num);
//	printf("%s ",ptr);
//	//free(ptr);
//	return 0;
//}
