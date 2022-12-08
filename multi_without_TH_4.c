#include <stdio.h>
#include <conio.h>

int main()
{
    int inputA, inputB;
    float sumA = 0;
    float sumB = 0;
    float sumC, sumD, sumE, sumn;
    printf("How many input and weights you want for neuron A\n");
    scanf("%d", &inputA);
    float xA[5], wA[5], xB[5], wB[5], b_new, b_old, alpha, t, imt, imtp, th;
    float activation_fn, ansA[inputA], ansB[inputB];

    for (int i = 0; i < inputA; i++)
    {
        printf("Enter the value for input%d \n", i + 1);
        scanf("%f", &xA[i]);
    }

    for (int i = 0; i < inputA; i++)
    {
        printf("Enter the value for weight%d \n", i + 1);
        scanf("%f", &wA[i]);
    }

    for (int i = 0; i < inputA; i++)
    {
        ansA[i] = xA[i] * wA[i];
    }

    for (int i = 0; i < inputA; i++)
    {
        sumA = sumA + ansA[i];
    }
    printf("SUM FOR NEURON A IS %f\n", sumA);

    printf("How many input and weights you want for neuron B\n");
    scanf("%d", &inputB);

    for (int i = 0; i < inputB; i++)
    {
        printf("Enter the value for input%d \n", i + 1);
        scanf("%f", &xB[i]);
    }

    for (int i = 0; i < inputB; i++)
    {
        printf("Enter the value for weight%d \n", i + 1);
        scanf("%f", &wB[i]);
    }

    for (int i = 0; i < inputB; i++)
    {
        ansB[i] = xB[i] * wB[i];
    }

    for (int i = 0; i < inputB; i++)
    {
        sumB = sumB + ansB[i];
    }
    printf("SUM FOR NEURON B IS %f\n", sumB);

    printf("\n");
    sumC = sumA + sumB;
    printf("SUM FOR NEURON C IS %f\n", sumC);

    sumD = sumA + sumB;
    printf("SUM FOR NEURON D IS %f\n", sumD);

    sumE = sumC + sumD;
    printf("Final SUM of Neurons  are %f\n\n", sumE);
    return 0;
}