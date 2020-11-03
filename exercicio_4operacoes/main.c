#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x, y, a, b, t, r, u, h, soma, sub, mul,div;

    printf("Indique os numero que pretende somar: ");
    scanf("%f %f",&x,&y);
    printf("Indique os numeros que pretenda subtrair: ");
    scanf("%f %f", &a, &b);
    printf("Indique os numero que pretende multiplicar: ");
    scanf("%f %f",&t,&r);
    printf("Indique os numeros que pretenda dividir: ");
    scanf("%f %f", &u, &h);

    soma = x + y;
    sub = a - b;
    mul = t * r;
    div = u / h;

    printf("Soma: %.2f+%.2f=%.2f\nSubtracao: %.2f-%.2f=%.2f\nMultiplicacao: %.2f*%.2f=%.2f\nDivisao: %.2f/%.2f=%.2f",x,y,soma,a,b,sub,t,r,mul,u,h,div);
    getchar();
    return 0;
}
