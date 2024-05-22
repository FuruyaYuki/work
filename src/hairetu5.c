/*
 * hairetu5.c
 *
 *  Created on: 2024/05/22
 *      Author: Administrator
 */


#include <stdio.h>

int main(void){
	int binary[16];
	int value;
	int i;

	scanf("%d",&value);
	i = 0;
	while(value >= 0 && i != 16){
		if(value > 1){
			binary[15-i] = value % 2;
			value = value / 2;
			i++;
		}else{
			binary[15-i] = value;
			value = 0;
			i++;
		}
	}
	for(i=0;i<16;i++){
		printf("%d",binary[i]);
	}
	return 0;
}
