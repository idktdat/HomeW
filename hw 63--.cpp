#include<stdio.h>

int main(){
	char name[1000], address[1000];
	gets(name);
	gets(address);
	printf("Name: %s \n", name);
	printf("Address: %s \n", address);
	return 0;
}

