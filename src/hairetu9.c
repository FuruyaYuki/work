/*
 * hairetu9.c
 *
 *  Created on: 2024/05/22
 *      Author: Administrator
 */


#include<stdio.h>

int main(void){
	char sent[100];
	int cnt,i;
	scanf("%s",sent);
	while(sent[cnt] != '\0'){
		cnt++;
	}
	for(i=1;i<=cnt;i++){
		printf("%c",sent[cnt-i]);
	}
	return 0;
}
