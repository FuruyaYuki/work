/*
 * hairetu10.c
 *
 *  Created on: 2024/05/22
 *      Author: Administrator
 */


#include <stdio.h>

int main(void){
	char sbinary[17];
	int value;
	int i;
	scanf("%d",&value);
	i = 16;
	while(value >= 0 && i >= 0){
		if(i!=16){
			if(value >= 1){
				if((value % 2)==1){
					sbinary[i] = '1';
				}else{
					sbinary[i] = '0';
				}
				value = value / 2;
			}else{
				sbinary[i] = '0';
			}
		}else{
			sbinary[i] = '\0';
		}
		i--;
	}
	printf("%s",sbinary);
	return 0;
}
