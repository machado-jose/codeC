#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *file;
	char line[256];

	if(argc < 2)
	{
		fprintf(stderr, "%s: Falta o arquivo de entrada\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if( (file = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "%s: Nao foi possivel abrir o arquivo\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while( fscanf(file, "%s", line) != EOF)
	{
		printf("%s\n", line);
	}

	fclose(file);
	exit(EXIT_SUCCESS);

}