/*
 * kansu3-2.c
 *
 *  Created on: 2024/05/21
 *      Author: Administrator
 */


#include <stdio.h>

int hikaku(int x,int y,int z);

int main(void){
	int a,b,c;
	printf("X\n");
	scanf("%d\n",&a);
	printf("Y\n");
	scanf("%d\n",&b);
	printf("Z\n");
	scanf("%d",&c);
	hikaku(a,b,c);
	return 0;
}

int hikaku(int x,int y,int z){
	char w[4] = {"XYZ"};
	int s,t,kase;
	if(x>=y && x>=z){
		if(x==y && x==z){
			printf("すべて等しい");
		}else if(x>y && x==z){
			s = 0;
			t = 2;
			kase = 1;
		}else if(x==y && x>z){
			s = 0;
			t = 1;
			kase = 1;
		}else{
			s = 0;
			kase = 2;
		}
	}else if(y>x && y>=z){
		if(y==z){
			s = 1;
			t = 2;
			kase = 1;
		}else{
			s = 1;
			kase = 2;
		}
	}else if(z>x && z>y){
		s = 2;
		kase = 2;
	}
	switch(kase){
		case 1:
			printf("大きいのは%cと%cです\n",w[s],w[t]);
			break;
		case 2:
			printf("大きいのは%cです\n",w[s]);
			break;
		default:
			break;
	}
	return 0;
}
