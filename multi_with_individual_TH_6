#include <stdio.h>
#include <conio.h>

int main()
{
    int inputA;
    int inputB;
    float sumA = 0;
    float sumB = 0;
    float sumC, sumD, sumE;
    float sumn;
    printf("How many input and weights you want for neuron A\n");
    scanf("%d", &inputA);
    float xA[5], wA[5], xB[5], wB[5], b_new, b_old, alpha, t, imt, imtp, th, thA, thB, thC, thD, thE;
    float activation_fn, ansA[inputA], ansB[inputB];

    for (int i = 0; i < inputA; i++)
    {
        printf("Enter the value for input %d \n", i + 1);
        scanf("%f", &xA[i]);
    }

    for (int i = 0; i < inputA; i++)
    {
        printf("Enter the value for weight %d \n", i + 1);
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

    printf("Enter the value for threshold A:-\n");
    scanf("%f", &thA);

    if (sumA >= thA)
    {

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

        printf("Enter the value for threshold B:-\n");
        scanf("%f", &thB);

        if (sumB >= thB)
        {

            printf("\n");
            sumC = sumA + sumB;
            printf("SUM FOR NEURON C IS %f\n", sumC);

            printf("Enter the value for threshold C:-\n");
            scanf("%f", &thC);

            if (sumC >= thC)
            {

                sumD = sumA + sumB;
                printf("SUM FOR NEURON D IS %f\n", sumD);

                printf("Enter the value for threshold D:-\n");
                scanf("%f", &thD);

                if (sumD >= thD)
                {
                    sumE = sumC + sumD;
                    printf("Final SUM of Neurons  IS %f\n\n", sumE);

                    printf("Enter the final threshold:-\n");
                    scanf("%f", &th);

                    if (sumE >= th)
                    {
                        printf("\n1\n");
                    }
                    else
                    {
                        printf("\n0\n");
                    }

                } // IF OF d
                else
                {

                    printf("\n0\n");
                }
            } // if of c
            else
            {

                printf("\n0\n");
            }

        } // IF OF B
        else
        {

            printf("\n0\n");
        }

    } // IF OF A

    else
    {

        printf("\n0\n");
    }

    return 0;
}