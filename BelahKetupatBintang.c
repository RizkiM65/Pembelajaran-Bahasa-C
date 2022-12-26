#include <stdio.h>

int main(){
    int i, j, k, baris;

    printf("Masukkan jumlah baris matriks: "); scanf("%d", &baris);

    for(i=1; i<=baris; i++){
        for(j=1; j<=baris-i; j++){
            printf(" ");
        }
        for(k=1; k<=i; k++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=1; i<=baris; i++){
        for(j=1; j<=i; j++){
            printf(" ");
        }
        for(k=1; k<=baris-i; k++){
            printf("* ");
        }
        printf("\n");
    }
}