#include<stdio.h> //Bai 33 C for beginner

int main(){
	int score;
	scanf("%d", &score);
	if( score < 0 || score > 10) {
		printf("The score is invalid");
	} else {
printf("The score is valid");
	}
	return 0;
}
