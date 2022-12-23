#include <stdio.h>

int main()
{
    int a;
    float f;
    char c;

    printf("masukan nilai a: ");
    scanf("%d", &a);
    printf("nilai a : %d\n", a);

    printf("masukan nilai a: ");
    scanf("%f", &f);
    printf("nilai a : %.2f\n", f);

    printf("masukan nilai a: ");
    scanf("%c", &c);
    printf("nilai a : %c\n", c);
}