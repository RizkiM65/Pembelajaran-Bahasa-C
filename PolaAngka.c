#include <stdio.h>

void tampilan(){
    printf("POLA ANGKA\n");
    printf("1. Sefitiga1\n2. Segitiga2\n3. Segitiga3\n4. Segiempat1\n5. Segiempat2\n6. Segiempat3\n7. BelahKetupat1\n8. BelahKetupat2\n9. BelahKetupat3\n");
}
void segitiga1(){
    int i, j, baris;

    printf("Masukkan jumlah baris pola: "); scanf("%d", &baris);

    for(i=1; i<=baris; i++){
        for(j=1; j<=i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
}

void segitiga2(){
    int i, j, baris;

    printf("Masukkan jumlah baris pola: "); scanf("%d", &baris);

    for(i=1; i<=baris; i++){
        for(j=1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}

void segitiga3(){
    int i, j, k, baris;

    printf("Masukkan jumlah baris pola: "); scanf("%d", &baris);

    for(i=1; i<=baris; i++){
        for(j=1; j<=i; j++){
            k++;
            printf("%d ", k);
        }
        printf("\n");
    }
}

void segiempat1(){
    int i, j, baris;

    printf("Masukkan jumlah baris pola: "); scanf("%d", &baris);

    for(i=1; i<=baris; i++){
        for(j=1; j<=baris; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
}

void segiempat2(){
    int i, j, baris;

    printf("Masukkan jumlah baris pola: "); scanf("%d", &baris);

    for(i=1; i<=baris; i++){
        for(j=1; j<=baris; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}

void segiempat3(){
    int i, j, k, baris;

    printf("Masukkan jumlah baris pola: "); scanf("%d", &baris);

    for(i=1; i<=baris; i++){
        for(j=1; j<=baris; j++){
            k++;
            printf("%d ", k);
        }
        printf("\n");
    }
}

void belahketupat1(){
    int i, j, k, baris;

    printf("Masukkan jumlah baris pola: "); scanf("%d", &baris);

    for(i=1; i<=baris; i++){
        for(j=1; j<=baris-i; j++){
            printf(" ");
        }
        for(k=1; k<=i; k++){
            printf("%d ", i);
        }
        printf("\n");
    }
    for(i=1; i<=baris; i++){
        for(j=1; j<=i; j++){
            printf(" ");
        }
        for(k=1; k<=baris-i; k++){
            printf("%d ", i);
        }
        printf("\n");
    }
}

void belahketupat2(){
    int i, j, k, baris;

    printf("Masukkan jumlah baris pola: "); scanf("%d", &baris);

    for(i=1; i<=baris; i++){
        for(j=1; j<=baris-i; j++){
            printf(" ");
        }
        for(k=1; k<=i; k++){
            printf("%d ", j);
        }
        printf("\n");
    }
    for(i=1; i<=baris; i++){
        for(j=1; j<=i; j++){
            printf(" ");
        }
        for(k=1; k<=baris-i; k++){
            printf("%d ", j);
        }
        printf("\n");
    }
}

void belahketupat3(){
    int i, j, k, m = 0, n = 0, baris;

    printf("Masukkan jumlah baris pola: "); scanf("%d", &baris);

    for(i=1; i<=baris; i++){
        for(j=1; j<=baris-i; j++){
            printf(" ");
        }
        for(k=1; k<=i; k++){
            n = m++;
            printf("%d ", m);
        }
        printf("\n");
    }
    
    for(i=1; i<=baris; i++){
        for(j=1; j<=i; j++){
            printf(" ");
        }
        for(k=1; k<=baris-i; k++){
            n = m++;
            printf("%d ", m);
        }
        printf("\n");
    }
}

int main(){
    int mode;

    printf("Masukkan mode pola angka: "); scanf("%d", &mode);

    switch (mode){
    case 1:
        segitiga1();
        break;
    case 2:
        segitiga2();
        break;
    case 3:
        segitiga3();
        break;
    case 4:
        segiempat1();
        break;
    case 5:
        segiempat2();
        break;
    case 6:
        segiempat3();
        break;
    case 7:
        belahketupat1();
        break;
    case 8:
        belahketupat2();
        break;
    case 9:
        belahketupat3();
        break;
    default:
        printf("Masukkan anda tidak sesuai format");
        break;
    }
}