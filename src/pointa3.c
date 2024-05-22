/*
 * pointa3.c
 *
 *  Created on: 2024/05/21
 *      Author: Administrator
 */


#include<stdio.h>

int main(void){
	int i,a[9];
	int *p = a;
	for(i=0;i<=9;i++){
		scanf("%d",&a[i]);
	}
	for(i=9;i>=0;i--){
		printf("%d\n",*(p + i));
	}
}
