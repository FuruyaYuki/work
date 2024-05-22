#include <stdio.h>

int to_max(int x,int y);

int main(void){
	int a,b,c;
	printf("二つの整数を入力してください\n");
	scanf("%d\n",&a);
	scanf("%d",&b);
	c = to_max(a,b);
	printf("大きいのは%dです\n",c);
	return 0;
}

int to_max(int x,int y){
	if(x > y){
		return x;
	}
	else if(x < y){
		return y;
	}
	else{
		printf("どちらも同じです\n");
		return x;
	}
}

