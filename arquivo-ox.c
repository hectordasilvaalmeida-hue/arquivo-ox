#include <stdio.h>
#include <stdlib.h>

int validar(char simbolo);
void gravar(char tabuleiro[3][3], char arquivo[]);

int main(int argc, char *argv[])
{
    char tabuleiro[3][3];
    int linha, coluna;
    int k = 2;

    if (argc != 11)
    {
        printf("Uso: %s arquivo.txt O O O X X X O O O\n", argv[0]);
        return 1;
    }

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            char valor = argv[k][0];

            if (!validar(valor))
            {
                printf("Erro: use apenas X ou O\n");
                return 1;
            }

            tabuleiro[linha][coluna] = valor;
            k++;
        }
    }

    gravar(tabuleiro, argv[1]);

    return 0;
}
