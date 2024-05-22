/*
 * hairetu6.c
 *
 *  Created on: 2024/05/22
 *      Author: Administrator
 */


#include<stdio.h>

int main(void){
	char moji[26];
	char small = 'a';
	int i,retu;
	printf("何列ですか？\n");
	scanf("%d",&retu);
	for(i=0;i<26;i++){
		moji[i] = small + i;
		printf("%c",moji[i]);
		if(((i + 1) % retu) == 0){
			printf("\n");
		}
	}
	return 0;
}
