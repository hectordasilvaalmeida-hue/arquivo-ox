#include <stdio.h>

int validar(char simbolo)
{
    return (simbolo == 'X' || simbolo == 'O');
}

void gravar(char tabuleiro[3][3], char nomeArquivo[])
{
    FILE *arquivo;

    arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL)
    {
        printf("Erro ao criar arquivo\n");
        return;
    }

    fprintf(arquivo, "| %c | %c | %c |\n",
            tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);

    fprintf(arquivo, "| %c | %c | %c |\n",
            tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);

    fprintf(arquivo, "| %c | %c | %c |\n",
            tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);

    fprintf(arquivo, "\n");
    fprintf(arquivo, "Criado por Hector da Silva Almeida");

    fclose(arquivo);
}
