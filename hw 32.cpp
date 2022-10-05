#include<stdio.h> //Bai 32 C for beginner

int main(){
	int a;
	scanf("%d", &a);
	if ( a > 10 && a < 100) {
		printf(" a is in range (10, 100)");
	} else {
		printf(" a is not in range (10, 100)");
	}
	return 0;
}
