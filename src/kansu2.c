/*
 * kansu2.c
 *
 *  Created on: 2024/05/21
 *      Author: Administrator
 */


#include <stdio.h>

int heikin(int x,int y);

int main(void){
	int a, b, c;
	printf("整数を二つ入力してください\n");
	scanf("%d",&a);
	scanf("%d",&b);
	c = heikin(a,b);
	printf("%dと%dの平均は%d\n",a,b,c);
	return 0;
}

int heikin(int x,int y){
	int z;
	z = (x + y)/2;
	return z;
}
