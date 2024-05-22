#include <stdio.h>

int star(int x);

int main(void){
	int a;
	printf("整数を入力してください\n");
	scanf("%d",&a);
	star(a);
	return 0;
}

int star(int x){
	int y,i = 1;
	while(x>=i){
		for(y=1;y<=i;y++){
			printf("$");
		}
		printf("\n");
		i++;
	}
	return 0;
}
