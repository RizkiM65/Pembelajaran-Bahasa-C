#include <stdio.h>
#include <string.h>

int main(){
    char kalimat[100];
    printf("Masukkan kalimat yang hendak di enkripsi: "); gets(kalimat);

    strlwr(kalimat); //fungsi string untuk merubah hurufnya menjadi besar semua

    for(int i=0; i<strlen(kalimat); i++){ //strlen ==> fungsi string untuk menghitung panjang string
        if (kalimat[i]==' '){
            continue;
        }else{
            kalimat[i]=(kalimat[i]+20)%26 +'A';
        }
    }
    printf("Kalimat terenkripsi yaitu: %s", kalimat);
}