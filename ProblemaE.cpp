/*
Autor: Laura Farias
Descrição: Resolução do Problema E da edição de 2025 da Maratona de Programação Interfatecs
*/

#include <stdio.h>
#include <math.h>

//seção de prototipação
void Area(float, float, float);

int main()
{

    float a, b, O;

    while(1)
    {
        scanf("%f %f %f", &a, &b, &O);
        if(a == 0, b == 0, O == 0)
            break;
        else
            Area(a, b, O);
    }

}//fim do programa

void Area(float a, float b, float O)
{

    float radianos = O * (3.14159265358979323846/180.0);
    float area = (a * b * sin(radianos)) / 2.0;
    printf("%.4f\n", area);

}