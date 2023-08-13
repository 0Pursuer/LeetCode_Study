//代码尚有问题
//#include<stdio.h>
//#include<stdlib.h>
//int* extract(int num) { //将十进制数num的每一位放进数组arr中
//    int* arr = (int*)malloc(sizeof(int));
//    int* ret = arr;
//    //int* p = ret;
//    int count = 1;
//    while (num > 0) {
//        
//        *arr= num % 10;
//        printf("*arr: %d\n", *(arr));
//        arr++;
//        printf("arr+1: %#x\n", arr);
//        count++;
//        ret = (int*)realloc(ret,sizeof(int)*count);
//        printf("Arr+1: %#x\n", arr);//开辟空间后
//        printf("ret+count: %#x\n", ret + count);
//        num /= 10;
//    }
//
//
//    for (int i = 0; i < 4; i++) {
//       
//        printf( "ret + %d:  %#x\n",i, ret + i);
//    }
//    return ret;
//}
//
//
//
//int main() {
//    int n = 1234;
//    int* arr = extract(n);
//    for (int i = 0; i < 4; i++) {
//        printf("%d\n", *(arr + i));
//    }
//    free(arr);  // 释放内存
//    return 0;
//}

//int main() {
//	int *k= (int*)malloc(sizeof(int));
//	k = (int*)realloc(k, sizeof(int)*2);
//	return 0;
//}