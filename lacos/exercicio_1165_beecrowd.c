/*Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo.
Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.
Entrada
A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 100),
indicando o número de casos de teste da entrada. Cada uma das N linhas seguintes contém um valor inteiro
X (1 < X ≤ 107), que pode ser ou não, um número primo.
Saída
Para cada caso de teste de entrada, imprima a mensagem “X eh primo” ou “X nao eh primo”, de acordo com a especificação fornecida.*/

#include <stdio.h>

int main()
{
    int a, b, i, j, c;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        scanf("%d", &b);
        c = 0;
        for (j = 1; j <= b; j++)
        {
            if (b % j == 0)
            c++;
        }

        if (c == 2)
        {
            printf("%d eh primo\n", b);
            }

        else
        {
            printf("%d nao eh primo\n", b);
            }
    }
    return 0;
}
