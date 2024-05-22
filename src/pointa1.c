/*
 * pointa1.c
 *
 *  Created on: 2024/05/21
 *      Author: Administrator
 */


#include <stdio.h>

int main(void){
	int x;
	int *p;
	p = &x;
	*p = 12;
	printf("%d\n",x);
	return 0;
}
