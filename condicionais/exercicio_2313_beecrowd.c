/*Dados três valores, verifique se os três podem formar um triângulo. Em caso afirmativo,
verifique se ele é escaleno, isóceles ou equilátero e se trata-se de um triângulo retângulo ou não.
Entrada
A entrada consiste em três números inteiros A,B e C (0 < A,B,C < 105).
Saída
A saída deve conter a string "Invalido" se os valores lidos não formarem um triângulo.
Se os valores formarem um triângulo a saída deve ser "Valido-Equilatero", "Valido-Escaleno" ou "Valido-Isoceles"
de acordo com a característica do triângulo seguido de "Retangulo: S" se o triângulo
for retângulo ou "Retangulo: N" se não for, conforme os exemplos.*/

#include <stdio.h>

int main()
{
    int a, b, c;
    int existe_triangulo = 0;
    scanf(" %d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b)
    {
        existe_triangulo = 1;
        if ((a == b && a != c) || (c == b && a != c) || (a == c && b != c))
        {
            printf("Valido-Isoceles\n");
        }
        else if (a == b && b == c)
        {
            printf("Valido-Equilatero\n");
        }
        else if (a != b && b != c && a != c)
        {
            printf("Valido-Escaleno\n");
        }
    }
    else
    {
        printf("Invalido\n");
    }
    
    if (existe_triangulo == 1)
    {
        if ((a * a) == (b * b) + (c * c) || (b * b) == (a * a) + (c * c) || (c * c) == (a * a) + (b * b))
        {
            printf("Retangulo: S\n");
        }else{
            printf("Retangulo: N\n");
        }
    }
}