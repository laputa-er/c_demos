/**
 * Finds the largest and smallest elements in an array
 */
#include <stdio.h>

 #define N 10
 void max_min(int a[], int n, int *max, int *min);

 int main(){
 	int b[N], i, big, small;

 	printf("Enter %d numbers:", N);
 	for(i = 0; i < N; i++){
 		scanf("%d", &b[i]);
 	}
 	max_min(b, N, &big, &small);
 	printf("Largest: %d\n", big);
 	printf("smallest: %d\n", small);

 	return 0;
 }

/**
 * 找出最大值和最小值并将结果赋给响应指针对应的变量
 * @param a   数组
 * @param n   数组大小
 * @param max 存储最大值的变量
 * @param min 存储最小值的变量
 */
 void max_min(int a[], int n, int *max, int *min){
 	int i;
 	*max = *min = a[0];
 	for(i = 1; i < n; i++){
 		if(a[i] > *max){
 			*max = a[i];
 		}else if(a[i] < *min){
 			*min = a[i];
 		}
 	}
 }
