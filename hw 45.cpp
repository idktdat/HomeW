#include<stdio.h>

int main(){
	int n;
	int i = 1;
	int count = 0;
	scanf("%d", &n);
	while(i <= n) {
		if(n % i ==0) {
			count++;
		}
		i++;
	}printf("%d", count);
	return 0;
	
}
