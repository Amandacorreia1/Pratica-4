#include <stdio.h>
#include <locale.h>

char* isNegative(int n){//indicando q é um ponteiro
	if(n>=0){
		return "Falso";
	}
	return "Verdadeiro";
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num;
	printf("\n\n");
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	char* b = isNegative(num);
	
	printf("\n O numero é Negativo?: %s", b);
	

	return 0;
}
