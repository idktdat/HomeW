#include<stdio.h> // Bai 24 C for beginner

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int c = a;
	a =b;
	b =c;
	printf("after swapping, a = %d, b = %d", a, b);
	return 0;
}
