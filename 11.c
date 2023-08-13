////盛最多水的容器
//#include<stdio.h>
//int MaxArea(int* height, int heightsize) {
//	int front = 0, rear = heightsize-1,s=0,smax=0;
//	int min = 0;
//	while (front < rear) {
//		min = height[front] < height[rear] ? height[front] : height[rear];
//		s = (rear - front) * min;
//		if (smax < s)
//			smax = s;
//		if (min == height[rear]) {
//			rear--;
//			while (height[rear+1] >= height[rear] && (front < rear - 1))
//				rear--;
//		}
//
//			
//		else {
//			front++;
//			while (height[front-1] >= height[front] && (front + 1 < rear))
//				front++;
//		}
//			
//	}
//	return smax;
//}
//int main() {
//	int s[] = { 1,8,6,2,5,4,8,3,7 };
//	printf("%d\n", MaxArea(s, sizeof(s) / sizeof(s[0])));
//	return 0;
//}