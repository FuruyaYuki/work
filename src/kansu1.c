/*
 * kansu1.c
 *
 *  Created on: 2024/05/21
 *      Author: Administrator
 */
#include <stdio.h>

int jou(int x);

int main(void){
	int a, b;
	printf("整数を入力してください\n");
	scanf("%d",&a);
	b = jou(a);
	printf("%dの二乗は%dです\n",a,b);
	return 0;
}

int jou(int x){
	int y;
	y = x*x;
	return y;
}

