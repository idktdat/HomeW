#include<stdio.h>

int main(){
	for( int i = 1; i <= 100; i++) {
		if(i == 51) {
			break;
		}
		printf("%d ", i);
	}
	return 0;
}
