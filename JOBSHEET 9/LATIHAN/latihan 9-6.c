#include <stdio.h>

void add_score(int *score){
	*score = *score + 5;
	printf("score diubah ke %d\n", *score);
}

void main(){
	int score = 0;
	
	printf("score sebelum diubah: %d\n", score);
	add_score(&score);
	printf("score sebelum diubah: %d\n", score);
}