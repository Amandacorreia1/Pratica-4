#include <stdio.h>

int fatorial (int n){
	int fat=1;
	for(int i=n; i>1; i--){
		fat = fat * i;
	}
	return fat;
}

int main(){
	
	printf("\n\n\n");
	printf("\t\t\t\t\tCalcular fatorial.\n\n");
	int x, fat;
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	fat = fatorial(x);
	
	printf("%d!: %d ", x, fat);
	return 0;
	
}
