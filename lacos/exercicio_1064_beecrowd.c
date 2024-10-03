/*Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos.
Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.
Entrada
A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes números será positivo.
Saída
O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.*/

int main()
{
    float num,resultado,media = 0;
    int i, cont = 0;

    for (i = 1; i <= 6; i++)
    {
        scanf("%f", &num);
        if (num > 0)
        {
            media = media + num;
            cont = cont + 1;
        }
    }
    resultado = (media/cont);
    printf("%d valores positivos\n", cont);
    printf("%.1f\n", resultado);
}