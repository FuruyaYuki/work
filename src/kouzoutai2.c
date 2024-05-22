#include <stdio.h>

struct point {
    int x;
    int y;
};

struct point wpoint(struct point ten);

int main(void){
	struct point ten = {2,5};
	ten = wpoint(ten);
	printf("%d %d",ten.x,ten.y);
	return 0;
}
struct point wpoint(struct point te){
	te.y *= 2;
	te.x *= 2;
	return te;
}
