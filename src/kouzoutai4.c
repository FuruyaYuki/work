/*
 * kouzoutai3.c
 *
 *  Created on: 2024/05/22
 *      Author: Administrator
 */


#include<stdio.h>

struct test {
	char name[20];
	int score;
	char hyou;
};

struct test hyouka(struct test one);

int main(void){
	int i;
	struct test seito[10];
	for(i=0;i<4;i++){
		printf("名前は？\n");
		scanf("%s",seito[i].name);
		printf("得点は？\n");
		scanf("%d",&seito[i].score);
	}
	for(i=0;i<4;i++){
		seito[i] = hyouka(seito[i]);
		printf("%s %d 成績 %c\n",seito[i].name,seito[i].score,seito[i].hyou);
	}
	return 0;
}

struct test hyouka(struct test one){
	if(one.score >= 60){
		if(one.score >= 70){
			if(one.score >= 80){
				one.hyou = 'A';
			}
			one.hyou = 'B';
		}
		one.hyou = 'C';
	}else{
		one.hyou = 'D';
	}
	return one;
}
