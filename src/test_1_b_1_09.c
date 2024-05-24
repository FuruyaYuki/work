#include<stdio.h>

int num[5];

void sum(void);

void min(void);

void average(void);

int main(void){
	int i;
	printf("値を入力してください\n");

	for(i=0;i<5;i++){
		printf("%d番:\n",i+1);
		scanf("%d",&num[i]);
	}

	sum();
	min();
	average();

	return 0;
}

void sum(void){
	int i,sumnum = 0;
	for(i=0;i<5;i++){
		sumnum += num[i];
	}
	printf("合計値：%d\n",sumnum);
}

void min(void){
	int i,minnum = 0;
	minnum = num[0];
	for(i=1;i<5;i++){
		if(num[i]<minnum){
			minnum = num[i];
		}
	}
	printf("最小値：%d\n",minnum);
}

void average(){
	int i;
	float avenum = 0;
	for(i=0;i<5;i++){
		avenum += num[i];
	}
	avenum /= 5;
	printf("平均値：%.1f",avenum);
}
