#include <stdio.h>

int main(){
    int i, j, baris, kolom;

    printf("Masukkan jumlah baris: "); scanf("%d", &baris);
    printf("Masukkan jjumlah kolom: "); scanf("%d", &kolom);

    for(i=1; i<=baris; i++){
        for(j=1; j<=kolom; j++){
            printf("* ");
        }
        printf("\n");
    }
}