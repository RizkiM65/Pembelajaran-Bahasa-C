#include <stdio.h>
#include <math.h>

void tampilan(){
    printf("KALKULATOR DERET\n");
    printf("Pilih Mode: ");
    printf("1. Membuat Deret Aritmatika\n");
    printf("2. Menentukan Nilai Suku Ke - n Deret Aritmatika\n");
    printf("3. Menentuka Jumlah Nilai Deret Hingga Suatu Suku (Barisan Aritmatika)\n");
    printf("4. Membuat Deret Geometri\n");
    printf("5. Menentukan Nilai Suku Ke - n Deret Geometri\n");
    printf("6. Menentuka Jumlah Nilai Deret Hingga Suatu Suku (Barisan Geometri)\n");
}

void deretaritmatika1(){
    int i, hasil = 0, beda, deret;

    printf("Masukkan jumlah deret: "); scanf("%d", &deret);
    printf("Masukkan nilai selisih atau beda pada deret: "); scanf("%d", &beda);

    for(i=1; i<=deret; i++){
        hasil = hasil + beda;
        printf("%d ", hasil);
    }
}

void deretaritmatika2(){
    int a, b, n, hasil;

    printf("Masukkan nilai suku pertama deret: "); scanf("%d", &a);
    printf("Masukkan nilai selisih atau beda pada deret: "); scanf("%d", &b);
    printf("Suku yang nilainya hendak diketahui: "); scanf("%d", &n);

    hasil = a + (n-1)*b;

    printf("Nilai Suku ke %d adalah %d", n, hasil);
}

void barisanaritmatika(){
    int a, b, n, hasil, hasil2;

    printf("Masukkan nilai suku pertama deret: "); scanf("%d", &a);
    printf("Masukkan nilai selisih atau beda pada deret: "); scanf("%d", &b);
    printf("Suku yang nilainya hendak diketahui: "); scanf("%d", &n);

    hasil = a + (n-1)*b;
    hasil2 = (n/2)*(a + hasil);

    printf("Jumlah deret hingga Suku ke %d adalah %d", n, hasil2);
}

void deretgeometri1(){
    int i, hasil = 1, rasio, deret;

    printf("Masukkan jumlah deret: "); scanf("%d", &deret);
    printf("Masukkan nilai rasio pada deret: "); scanf("%d", &rasio);

    for(i=1; i<=deret; i++){
        hasil = hasil*rasio;
        printf("%d ", hasil);
    }
}

void deretgeometri2(){
    int a, r, n, hasil;

    printf("Masukkan nilai suku pertama deret: "); scanf("%d", &a);
    printf("Masukkan nilai rasio pada deret: "); scanf("%d", &r);
    printf("Suku yang nilainya hendak diketahui: "); scanf("%d", &n);

    int pangkat = n-1;
    hasil = a*pow(r, pangkat); //fungsi perpangkatan

    printf("Nilai Suku ke %d adalah %d", n, hasil);
}

void barisangeometri(){
    int a, r, n, hasil;
    float sn;

    printf("Masukkan nilai suku pertama deret: "); scanf("%d", &a);
    printf("Masukkan nilai rasio pada deret: "); scanf("%d", &r);
    printf("Suku ke-: "); scanf("%d", &n);
    
    if (r<1){
        sn = (float)(a*(1-(float)pow(r, n)))/(1-r);
        printf("Jumlah nilai hingga suku ke %.d adalah %.2f", n, sn);
    }else {
        sn = (float)(a*((float)pow(r, n)-1))/(r-1);
        printf("Jumlah nilai hingga suku ke %.d adalah %.2f", n, sn);
    }
}

int main(){
    int mode;

    tampilan();

    printf("Masukkan mode: "); scanf("%d", &mode);

    switch (mode){
    case 1:
        deretaritmatika1();
        break;
    case 2:
        deretaritmatika2();
        break;
    case 3:
        barisanaritmatika();
        break;
    case 4:
        deretgeometri1();
        break;
    case 5:
        deretgeometri2();
        break;
    case 6:
        barisangeometri();
        break;
    default:
        break;
    }
    
}