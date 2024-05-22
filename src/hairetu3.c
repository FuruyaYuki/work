/*
 * hairetu1.c
 *
 *  Created on: 2024/05/21
 *      Author: Administrator
 */


#include<stdio.h>

int main(void){
	int i,seisu[9];
	printf("数値を入力してください\n");
	for(i=0;i<=9;i++){
		scanf("%d",&seisu[i]);
		printf("%d\n",seisu[i]);
	}
	printf("偶数は：");
	for(i=0;i<=9;i++){
		if(seisu[i] % 2 == 0){
			printf("%d　",seisu[i]);
		}
	}
	printf("\n");
	printf("奇数は：");
	for(i=0;i<=9;i++){
		if(seisu[i] % 2 == 1){
			printf("%d　",seisu[i]);
		}
	}
	printf("\n");
	return 0;
}
