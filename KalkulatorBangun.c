#include <stdio.h>

void luaspersegi(int sisi){
    printf("Luas Persegi: %d", sisi*sisi);
}

void luaspersegipanjang(int panjang, int lebar){
    printf("Luas Persegi Panjang:  %d", panjang*lebar);
}

void luassegitiga(int alas, int tinggi){
    float hasil = (float) ((alas*tinggi)/2);
    printf("Luas Segitiga: %.2f", hasil);
}

void luasbelahketupat(int diagonal1, int diagonal2){
    float hasil = (float) ((diagonal1*diagonal2)/2);
    printf("Luas Belah Ketupat: %.2f", hasil);
}

int main(){
    int mode, sisi, panjang, lebar, alas, tinggi, diagonal1, diagonal2;

    printf("Masukkan mode: "); scanf("%d", &mode);

    switch (mode)
    {
    case 1:
        printf("Masukkan nilai panjang sisi persegi: "); scanf("%d", &sisi); 
        luaspersegi(sisi);
        break;
    case 2:
        printf("Masukkan nilai panjang persegi: "); scanf("%d", &panjang);
        printf("Masukkan nilai lebar persegi: "); scanf("%d", &lebar); 
        luaspersegipanjang(panjang, lebar);
        break;
    case 3:
        printf("Masukkan nilai panjang alas persegi: "); scanf("%d", &alas);
        printf("Masukkan nilai tinggi persegi: "); scanf("%d", &tinggi); 
        luassegitiga(alas, tinggi);
        break;
    case 4:
        printf("Masukkan nilai panjang diagonal 1 persegi: "); scanf("%d", &diagonal1);
        printf("Masukkan nilai panjang diagonal 2 persegi: "); scanf("%d", &diagonal2); 
        luasbelahketupat(diagonal1, diagonal2);
        break;
    default:
        printf("Masukkan anda tidak sesuai");
        break;
    }
    return 0;
}