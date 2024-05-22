/*
 * kouzoutai1.c
 *
 *  Created on: 2024/05/22
 *      Author: Administrator
 */


#include<stdio.h>

struct rain{
	char month[5];
	char ml[7];
};

int main(void){
	int i;
	struct rain tuki[12] = {
			{"1月","49mm"},
			{"2月","60mm"},
			{"3月","115mm"},
			{"4月","130mm"},
	};
	for(i=0;i<4;i++){
		printf("%s %s\n",tuki[i].month,tuki[i].ml);
	}
	return 0;
}
