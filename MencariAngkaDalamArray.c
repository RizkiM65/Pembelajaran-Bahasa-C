#include <stdio.h>

int main(){
    int i, cari_angka, jumlah_array;

    printf("Masukkan Jumlah Array yang hendak dibuat: "); scanf("%d", &jumlah_array);

    int array[jumlah_array];

    for(i=1; i<=jumlah_array; i++){
        printf("Masukkan nilai array indeks ke-%d: ", i); scanf("%d", &array[i]);
    }
    printf("\n");
    printf("Masukkan elemen array yang hendak diketahui nilainya: "); scanf("%d", &cari_angka);

    for(i=1; i<=jumlah_array; i++){
        if(array[i]==cari_angka){
            printf("Elemen array ada di indeks ke-%d\n", i);
            break;
        }
    }

    return 0;
}