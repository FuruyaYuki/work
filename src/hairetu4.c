/*
 * hairetu4.c
 *
 *  Created on: 2024/05/22
 *      Author: Administrator
 */


#include <stdio.h>

int main(void){
	int i = 0, sc = 0,cnt = 0,a[9];
	printf("数値を入力してください\n");
	while((sc <= 100)&&(cnt != 10)){
		scanf("%d",&a[cnt]);
		sc = sc + a[cnt];
		cnt++;
	}
	while(i < cnt){
		printf("%d\n",a[i]);
		i++;
	}
	return 0;
}
