/*
 * pointa2.c
 *
 *  Created on: 2024/05/21
 *      Author: Administrator
 */


#include<stdio.h>

int main(void){
	char str[] = "hello world";
	char *p = str;
	p[0] = p[0] - ('a' - 'A');
	p[6] = p[6] - ('a' - 'A');
	printf("%s\n",str);
}
