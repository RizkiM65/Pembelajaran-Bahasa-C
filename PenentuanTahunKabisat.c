#include <stdio.h>

int main(){
    int tahun;

    printf("Masukkan TAHUN yang hendak diperiksa: "); scanf("%d", &tahun);

    if (tahun%4 == 0){
        if (tahun%100 == 0){
            if (tahun%400 == 0){
                printf("Tahun %d adalah tahun kabisat", tahun);
            }else{
                printf("Tahun %d bukan tahun kabisat", tahun);
            }
        }else{
            printf("Tahun %d adalah tahun kabisat", tahun);
        }
    }else{
        printf("Tahun %d bukan tahun kabisat", tahun);
    }
}