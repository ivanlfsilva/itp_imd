/*Bino e Cino são colegas inseparáveis. Bino gosta de criar desafios matemáticos para Cino resolver.
Desta vez, Bino gerou uma lista de números e perguntou ao Cino quantos números da lista são múltiplos de 2, 3, 4 e 5.
Esse desafio pode parecer simples, porém, quando a lista contém muitos números, Cino se confunde e acaba errando alguns
cálculos. Para ajudar Cino, faça um programa para resolver o desafio de Bino.
Entrada
A primeira linha da entrada consiste em um inteiro N (1 ≤ N ≤1000), representando a quantidade de números na lista de Bino.
A segunda linha contém N inteiros Li (1 ≤ Li ≤ 100), representando os números da lista de Bino.
Saída
Imprima a quantidade de números múltiplos de 2, 3, 4 e 5 presentes na lista. Observe a formatação da saída nos exemplos,
pois ela deve ser seguida rigorosamente.*/
#include <stdio.h>

int main()
{
    int i, n, num_atual,n1=0,n2=0,n3=0,n4=0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num_atual);
        if (num_atual % 2 == 0)
        {
            n1++;
        }
        if (num_atual % 3 == 0)
        {
            n2++;
        }
        if (num_atual % 4 == 0)
        {
            n3++;
        }
        if (num_atual % 5 == 0)
        {
            n4++;
        }
    }
    printf("%d Multiplo(s) de 2\n", n1 );
    printf("%d Multiplo(s) de 3\n", n2 );
    printf("%d Multiplo(s) de 4\n", n3 );
    printf("%d Multiplo(s) de 5\n", n4 );
    return 0;
}