/*
 * sample.c
 *
 *  Created on: 2024/05/14
 *      Author: new-kensyu
 */
#include <stdio.h>

int sc(void){
	int a;
	scanf("%d",&a);
	return a;
}
int main(void) {
	int ten;									//点数の宣言

	printf("点数を入力してください＞\n");
	ten = sc();							//点数入力

	if (ten >= 60) {
		printf("合格です。\n");
		printf("おめでとう！\n");
	}
	else {
		printf("不合格です。\n");
		printf("もっと勉強しましょう。\n");
	}

	printf("次の試験は来週の水曜日です。\n");

	return 0;
}

