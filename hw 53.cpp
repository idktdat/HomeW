#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[1000];
	for( int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	int Maxvalue = a[0];
	for(int i = 0; i < n; i++) {
		if(a[i] > Maxvalue) {
			Maxvalue = a[i];
		}
	}
	printf("%d", Maxvalue);
	return 0;
}
