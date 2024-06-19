#include <stdio.h>


int main(void)
{
    int altura, colunas, linhas; 

    do
    {
        altura = 3;

    } while (altura < 1 || altura > 8);

    for (linhas = 0; linhas < altura; linhas++)
    {
        for (colunas = 0; colunas < altura; colunas++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}
