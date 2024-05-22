/*
 * kansu5.c
 *
 *  Created on: 2024/05/21
 *      Author: Administrator
 */


#include<stdio.h>

int kukuoneraw(int x);

int main(void){
	int a = 1;
	printf("九九の表です\n");
	while(a<=9){
		kukuoneraw(a);
		a++;
	}
	return 0;
}

int kukuoneraw(int x){
	int y;
	for(y=1;y<=9;y++){
		printf("%d	",x*y);
	}
	printf("\n");
	return 0;
}
