#include <stdio.h>

int main(){
    int n, i, j, prima = 1;

    printf("Masukkan angka yang didientifikasi: "); scanf("%d", &n);

    if(n == 0 || n == 1){
        prima = 0;
    }else{
        for(i=2; i<=n/2; i++){
            if(n%i==0){
                prima = 0;
                break;
            }
        }
    }
    printf("\n");
    if(prima==1){
        printf("Angka %d termasuk bilangan prima", n);
    }else{
        printf("Angka %d tidak termasuk bilangan prima", n);
    }
}