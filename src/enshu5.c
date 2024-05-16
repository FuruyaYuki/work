/*
 * enshu5.c
 *
 *  Created on: 2024/05/16
 *      Author: new-kensyu
 */


#include <stdio.h>

int main(void){
	int sc;
	printf("点数を入力してください\n");
	scanf("%d",&sc);
	if(sc >= 0 && sc <= 100){
		if(sc >= 60){
			printf("合格\n");
			if(sc < 80){
				printf("よくできました。\n");
				if(sc >= 70){
					printf("良\n");
				}else{
					printf("可\n");
				}
			}else{
				printf("たいへんよくできました。\n");
				printf("優");
			}
		}else{
			printf("不合格\n");
			printf("ざんねんでした。\n");
			printf("不可\n");
		}
	}else{
		printf("試験の点数は0から100の間です\n");
	}
}
