////N型变换
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//#include<string.h>
//char* convert(char* s ,int numRows) {
//	assert(s&&numRows);
//	int n = strlen(s);
//	int row = n / (numRows - 1) + 3;
//	if (numRows == 1 || numRows == n)
//		return s;
//	int k = 0, i = 0,j = 0;
////	char arr[numRows][row] = { 0 };错误，需要动态开辟
//	char** data = (char**)calloc(sizeof(char*), numRows);
//	for (i = 0; i < numRows; i++) {
//		data[i] = (char*)calloc(sizeof(char), row);
//	}
//	//for (i = 0; i < numRows; i++) {
//	//	for (j = 0; j < row; j++) {
//	//		printf("%3d_", data[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	i = 0;
//	while (i < n) {
//		for (j = 0; j < numRows && i < n; j++)
//			data[j][k] = s[i++];
//		k++;
//		for (j = numRows - 2; j > 0&& i < n; j--)
//			data[j][k] = s[i++];
//		k++;
//	}
//
//	char* p = (char*)calloc(sizeof(char), n);
//	char* q = p;
//	for(i=0;i<numRows;i++){
//		for (j = 0; j < row; j++) {
//			if (data[i][j] != '\0')
//				*q++ = data[i][j];
//			//printf("%3d_", data[i][j]);
//		}
//		//printf("\n");
//	}
//	*q = '\0';
//	free(data);
//	return p;
//}
//int main() {
//	char s[] = "abcdefghijklmn0pq";
//	char* d = convert(s, 5);
//	printf("\n%s", d);
//	return 0;
//}
