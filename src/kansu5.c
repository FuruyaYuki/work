/*
 * kansu5.c
 *
 *  Created on: 2024/05/21
 *      Author: Administrator
 */


#include<stdio.h>

int kukuoneraw(int x);

int main(void){
	int a;
	printf("九九の何段ですか\n");
	scanf("%d",&a);
	kukuoneraw(a);
	return 0;
}

int kukuoneraw(int x){
	int y;
	for(y=1;y<=9;y++){
		printf("%d	",x*y);
	}
	return 0;
}
