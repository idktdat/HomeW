#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int answer = 1;
	while( b > 0) {
		answer = answer * a;
		b--;
	}
	printf("%d", answer);
	return 0;
}
