#include <stdio.h>
#include <conio.h>
// imtp=percentage of change in val-changer inn thrhold

float perceptron(float b_new, float b_old, float alpha, float t, float sum, float sumn, float th)
{

    b_new = b_old + (alpha * t);
    printf("New bias is %f\n", b_new);
    sumn = sum + b_new;
    printf("SUM IS %f\n", sumn);
    b_old = b_new;
    if (sumn >= th)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
        perceptron(b_new, b_old, alpha, t, sum, sumn, th);
    }
    return sumn;
}

int main()
{
    int input;
    printf("How many input and weights you want\n");
    scanf("%d", &input);
    float x[5], w[5], b_new, b_old, alpha, t, imt, imtp, th;

    float sum = 0;
    float sumn;

    for (int i = 0; i < input; i++)
    {
        printf("Enter the value for input%d \n", i + 1);
        scanf("%f", &x[i]);
    }

    for (int i = 0; i < input; i++)
    {
        printf("Enter the value for weight%d \n", i + 1);
        scanf("%f", &w[i]);
    }

    printf("Enter the value for threshold:-\n");
    scanf("%f", &th);

    float activation_fn, ans[input];

    for (int i = 0; i < input; i++)
    {
        ans[i] = x[i] * w[i];
    }

    for (int i = 0; i < input; i++)
    {
        sum = sum + ans[i];
    }
    printf("SUM IS %f\n", sum);

    if (sum >= th)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
        imt = (th - sum);
        imtp = (imt / th) * 100;
        b_old = imtp;
        printf("The value of old bias  is %f\n", b_old);
        t = imtp;

        alpha = 1;
        sumn = sum + b_old;
        printf("SUM IS %f\n", sumn);
    }

    if (sumn >= th)
    {
        printf("1\n");
    }

    else
    {
        printf("%d\n", 0);
        perceptron(b_new, b_old, alpha, t, sum, sumn, th);
    }
    return 0;
}