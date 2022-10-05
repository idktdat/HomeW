#include<stdio.h> //Bai 28 C for beginner

int main(){
	int n;
	scanf("%d", &n);
	if( n > 0) {
		printf(" n is an positive number");
	}
	if ( n == 0) {
		printf(" n equal to 0");
	}
	if( n < 0) {
		printf(" n is an negative number");
	}
	return 0;
}
