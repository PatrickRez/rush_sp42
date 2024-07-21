//funçao de manipulaçao
//funçao de auxilio
//funçao de tratamento 

// funçao auxiliar 1:
// para contar numero de edificios visiveis 

#include <stdio.h>

#define TAMANHO 4

int contar_visiveis(int linha [TAMANHO])
{
    int max_altura = 0;
    int visiveis = 0;
    int i = 0;

    while (i < TAMANHO)
    {
        if (linha[i] > max_altura)
        {
            visiveis ++;
            max_altura = linha[i];
        }
        i++;
    }
    return visiveis;
}

void calcular_dica(int grade [TAMANHO] [TAMANHO], int dica[4][TAMANHO])
{
    int col, linha, i;
    int coluna [TAMANHO];
    linha_invertida[TAMANHO];
// contar de cima para baixo
    col = 0;
    while (col < TAMANHO)
    {
        i = 0;
        while (i < TAMANHO)
        {
            coluna[i] = grade[i][col];
            i++;
        }
        dica[0][col] = contar_visiveis(coluna);
    
    // contar de baixo para cima agora so inverter as colunas
        i = 0;
        while (i < TAMANHO)
        {
            coluna[i] = grade[TAMANHO - 1 - i][col];
            i++;
        }
        dica[0][col] = contar_visiveis(coluna);
    }
    coll++
    // da esqueda apara a direita agoraw
    linha = 0;

    while (linha < TAMANHO)
    {
        dica[2][linha] = contar_visiveis(grade[linha]);
    }

    // da direita para a esqueda 
    i = 0;
    while (i < TAMANHO)
    {
        linha_invertida[i] =
        grade [linha][TAMANHO - 1 - i];
        i ++;
    }
    pista[3][linha] = contar_visiveis(contar_visiveis);

        linha ==;
    }
}



