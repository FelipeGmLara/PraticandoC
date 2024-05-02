#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv) {
	int numero;
	printf("Digite um número: ");
	scanf("%d", &numero);
	printf("O número digitado foi: %d", numero);
	return 0;
}
