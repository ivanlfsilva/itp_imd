/*Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos
(desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.
Entrada
Seis valores, negativos e/ou positivos.
Saída
Imprima uma mensagem dizendo quantos valores positivos foram lidos.*/

#include <stdio.h>

int main()
{
    float num;
    int i, cont = 0;

    for (i = 1; i <= 6; i++)
    {
        scanf("%f", &num);
        if (num > 0)
        {
            cont = cont + 1;
        }
    
    }
    printf("%d valores positivos\n", cont);
}