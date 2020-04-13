#include <stdio.h>
#include <stdlib.h>

int* criar_vetor(int *n, int *list_numbers)
{
	printf("\nO valor digitado foi %d", *n);
	list_numbers = (int*)malloc(*n * sizeof(int));
	for(int i = 0; i < *n; i++)
	{
		list_numbers[i] = i * 5;
	}
	return list_numbers;
}

void mostrar_vetor(int *n, int *list_numbers)
{
	for(int i = 0; i < *n; i++)
	{
		printf("\n[%d]: %d", i, list_numbers[i]);
	}
	printf("\n");
}

int main()
{
	int n;
	int *list_numbers;

	printf("Digite o tamanho do vetor desejado: ");
	scanf("%d", &n);
	list_numbers = criar_vetor(&n, list_numbers);
	mostrar_vetor(&n, list_numbers);
	free(list_numbers);
	exit(EXIT_SUCCESS);
}