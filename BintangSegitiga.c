#include <stdio.h>

int main(){
    int i, j, baris;

    printf("Masukkan jumlah baris seigitga: "); scanf("%d", &baris);

    for(i=1; i<=baris; i++){
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}