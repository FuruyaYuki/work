/*
 * enshu4.c
 *
 *  Created on: 2024/05/16
 *      Author: new-kensyu
 */


#include <stdio.h>

int main(void){
	int x, y;
	printf("Xの数値\n");
	scanf("%d",&x);
	printf("Yの数値\n");
	scanf("%d",&y);
	if(x > y){
		printf("XはYより大きい\n");
	}
	else if(y > x){
		printf("XはYより小さい\n");
	}
	else{
		printf("XとYは等しい");
	}
	return 0;
}
