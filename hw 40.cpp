#include<stdio.h>

int main(){
	int a;
	int sum = 0;
	scanf("%d", &a);
	for(int i = 0; i <= a; i++) {
		if(i % 2 ==1) {
			sum = sum + i;
		}
	}
	printf("%d", sum);
	return 0;
}


























