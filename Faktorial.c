#include <stdio.h>

int main(){
    int n, hasil = 1;

    printf("Masukkan nilai faktorial: "); scanf("%d", &n);

    for(int i=1 ;i<=n ;i++){
        hasil = hasil*i;
    }
    printf("Hasil dari %d faktorial yaitu %d", n, hasil);
}