/*
 * enshu6.c
 *
 *  Created on: 2024/05/15
 *      Author: new-kensyu
 */


#include <stdio.h>

int main(void){
	int a,b,num = 0;
	scanf("%d",&a);
	scanf("%d",&b);
	if((b <= 2 && b >= 0) && (a <= 6 && a >= 0)){
		if((b == 0 && (a == 0 || a == 2 || a == 5)) || (b == 1 && (a == 0 || a == 6)) || (b == 2 && (a == 0 || a == 3 || a == 6))){
			num = 1;
		}
		else{
			num = 2;
		}
		switch(num){
			case 1:
				printf("休診です\n");
				break;
			case 2:
				printf("開いています\n");
				break;
			default:
				break;
		}
	}
	else{
		printf("不正な入力値を検出しました\n");
	}
}
