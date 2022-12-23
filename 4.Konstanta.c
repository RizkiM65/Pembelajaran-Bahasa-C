#include <stdio.h>

#define jarak 10
#define jumlah 2.3
#define kode 'A'

int main ()
{
    const int param = 1;
    const float koma = 2.1;
    const char kodelagi = 'B';

    printf("jarak = %d\n", jarak);
    printf("jarak = %.2f\n", jumlah);
    printf("jarak = %c\n", kode);
    printf("jarak = %d\n", param);
    printf("jarak = %.2f\n", koma);
    printf("jarak = %c\n", kodelagi);
}