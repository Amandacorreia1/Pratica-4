#include <stdio.h>
#include <locale.h>


float soma(float a, float b){
	return a + b;
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float x, y, s;
	printf("\n");
	printf("\t\t\t\t\tCalcular a soma de dois números.\n");
	printf("\t\t\t\t\t\tFórmula : x + y\n");
	
	printf("\nDigite o primeiro valor: ");
	scanf("%f", &x);
	
	printf("\nDigite o segundo valor: ");
	scanf("%f", &y);
	
	s = soma (x, y);
	
	printf("\nO resultado da soma é: %.2f", s);
	
	return 0;
	
}
