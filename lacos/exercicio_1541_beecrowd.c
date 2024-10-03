/*Sr PI é um construtor muito famoso na cidade de Programolândia. Ele precisa de sua ajuda para encontrar
os melhores terrenos da cidade, para realizar assim a construção de vários projetos de casas que possui.
Considere que ele tenha por exemplo, um projeto para construir uma casa de 8 metros por 10 metros, e a
legislação do município permite a construção de no máximo 100% do terreno. Como todos os terrenos nesta
cidade são perfeitamente quadrados e o valor dos lados da casa são apenas uma referência para a área total
a ser construída (80 metros quadrados), o sr PI precisaria de um terreno de 8.994 metros, o que simplificado
daria como resultado 8 metros e o tamanho real da casa seria de 64 metros quadrados. Se a legislação permitisse
a utilizar 50% do terreno, o mesmo teria que ter 160 metros para que 50% dele fosse 80 metros quadrados, o suficiente
para uma casa de 8 x 8 metros (64 metros quadrados). No primeiro caso de teste, como o percentual para construir é de apenas 20%,
o terreno teria que ter 20 metros de lado para que 1/5 deste terreno tivesse o tamanho de 80 metros quadrados. Ajude o sr PI a determinar
o tamanho minimo do terreno.
Entrada
A entrada é composta de vários casos de testes. Cada caso de teste é composto de três números inteiros
A, B e C ( > 0 e ≤ 1000) separados por um espaço. Estes números representam as medidas da casa (A e B) e o percentual
máximo liberado para construir nesse bairro (C). Um único valor igual a 0 indica o fim das entradas.
Saída
Você deverá informar um número inteiro, o qual representa a medida do lado do terreno. Este valor deverá ser truncado caso necessário.*/
#include <stdio.h>
#include <math.h>

int main()
{

    int a = -1, b, c, area, lado;

    while (a != 0)
    {
        scanf("%d", &a);
        if (a == 0)
            break;
        else
        {
            scanf("%d %d", &b, &c);
            area = (a * b * 100) / c; 
            lado = sqrt(area);
            printf("%d\n", lado);
        }
    }
    return 0;
}