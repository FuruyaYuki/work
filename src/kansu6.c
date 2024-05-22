/*
 * kansu6.c
 *
 *  Created on: 2024/05/21
 *      Author: Administrator
 */


#include <stdio.h>

int moji = 0;

char henkan(char str);

int main(void){
	char str,string[100];
	int i;
	printf("文字列を入力してください\n");
	scanf("%s",string);
	printf("%s\n",string);
	for(i=0;string[i]!='\0';i++);
	while(moji <= i){
		str = henkan(string[moji]);
		printf("%c",str);
		moji++;
	}
	printf("\n");
	return 0;
}

char henkan(char str){
	if('a' <= str && str <= 'z'){
		str = str - ('a' - 'A');
	}
	return str;
}
