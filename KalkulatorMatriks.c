#include <stdio.h>
void tampilan(){
    printf("KALKULATOR 2 MATRIKS\n");
    printf("Pilihan Mode: \n");
    printf("1. Penjumlahan \n");
    printf("2. Pengurangan \n");
    printf("3. Perkalian Matriks\n");
    printf("4. Perkalian Skalar\n");
}
void penjumlahan(){
    int i, j, baris, kolom, matriksA[20][20], matriksB[20][20], hasilpenjumlahan[20][20];

    //penentuan baris dan kolom matriks
    printf("Masukkan format baris: "); scanf("%d", &baris);
    printf("Masukkan format kolom: "); scanf("%d", &kolom);

    //masukkan nilai matriksA
    for(i=0; i<baris; i++){
        for(j=0; j<kolom; j++){
            printf("Masukkan nilai matriks A (baris, kolom)(%d, %d)= ", i,j); scanf("%d", &matriksA[i][j]);
        }
    }

    printf("\n");

    //masukkan nilai matriksB
    for(i=0; i<baris; i++){
        for(j=0; j<kolom; j++){
            printf("Masukkan nilai matriks B (baris, kolom)(%d, %d)= ", i,j); scanf("%d", &matriksB[i][j]);
        }
    }

    printf("\n");
    printf("HASIL PENJUMLAHAN\n");

    //operasi penjumlahan
    for(i=0; i<baris; i++){
        for(j=0; j<kolom; j++){
            hasilpenjumlahan[i][j]=matriksA[i][j]+matriksB[i][j];
            printf("%d \t", hasilpenjumlahan[i][j]);
        }
        printf("\n");
    }
}

void pengurangan(){
    int i, j, baris, kolom, matriksA[20][20], matriksB[20][20], hasilpengurangan[20][20];

    //penentuan baris dan kolom matriks
    printf("Masukkan format baris: "); scanf("%d", &baris);
    printf("Masukkan format kolom: "); scanf("%d", &kolom);

    //masukkan nilai matriksA
    for(i=0; i<baris; i++){
        for(j=0; j<kolom; j++){
            printf("Masukkan nilai matriks A (baris, kolom)(%d, %d)= ", i,j); scanf("%d", &matriksA[i][j]);
        }
    }

    printf("\n");

    //masukkan nilai matriksB
    for(i=0; i<baris; i++){
        for(j=0; j<kolom; j++){
            printf("Masukkan nilai matriks B (baris, kolom)(%d, %d)= ", i,j); scanf("%d", &matriksB[i][j]);
        }
    }

    printf("\n");
    printf("HASIL PENGURANGAN\n");

    //operasi pengurangan
    for(i=0; i<baris; i++){
        for(j=0; j<kolom; j++){
            hasilpengurangan[i][j] = matriksA[i][j] - matriksB[i][j];
            printf("%d \t", hasilpengurangan[i][j]);
        }
        printf("\n");
    }
}

void perkalianmatriks(){
    int i, j, barisA, kolomA, barisB, kolomB, hasil, matriksA[20][20], matriksB[20][20], hasilperkalian[20][20];

    printf("Masukkan nilai baris matriks A: "); scanf("%d", &barisA);
    printf("Masukkan nilai kolom matriks A: "); scanf("%d", &kolomA);
    printf("Masukkan nilai baris matriks B: "); scanf("%d", &barisB);
    printf("Masukkan nilai kolom matriks B: "); scanf("%d", &kolomB);

    if(kolomA != barisB){
        printf("Matriks A dan Matriks B tidak dapat dioperasikan");
    }else{
        //masukkan nilai matriks A
        for(i=0; i<barisA; i++){
            for(j=0; j<kolomA; j++){
                printf("Masukkan nilai matriks A (baris, kolom)(%d, %d)= ", i,j); scanf("%d", &matriksA[i][j]);
            }
        }

        //masukkan nilai matriks B
        for(i=0; i<barisB; i++){
            for(j=0; j<kolomB; j++){
                printf("Masukkan nilai matriks B (baris, kolom)(%d, %d)= ", i,j); scanf("%d", &matriksB[i][j]);
            }
        }

        //operasikan perkalian matriks
        for(i=0; i<barisA; i++){
            for(j=0; j<kolomB; j++){
                for(int k=0; k<kolomB; k++){
                    hasil = hasil + matriksA[i][k]* matriksB[k][j];
                }
                hasilperkalian[i][j] = hasil;
                hasil = 0;
            }
        }

        printf("Hasil Perkalian Matriks A dan Matriks B\n");
        for(i=0; i<barisA; i++){
            for(j=0; j<kolomB; j++){
                printf("%d\t", hasilperkalian[i][j]);
            }
            printf("\n");
        }
    }
    
}

void perkalianskalar(){
    int i, j, baris, kolom, skalar, matriks[20][20], hasilperkalianskalar[20][20];

    printf("Masukkan nilai baris matriks: "); scanf("%d", &baris);
    printf("Masukkan nilai kolom matriks: "); scanf("%d", &kolom);
    printf("Masukkan nilai skalar: "); scanf("%d", &skalar);

    for(i=0; i<baris; i++){
        for(j=0; j<kolom; j++){
            printf("Masukkan nilai matriks (baris, kolom)(%d, %d)= ", i,j); scanf("%d", &matriks[i][j]);
        }
    }

    printf("\n");
    printf("Hasil Perkalian Skalar\n");
    //operasi perkalian skalar
    for(i=0; i<baris; i++){
        for(j=0; j<kolom; j++){
            hasilperkalianskalar[i][j] = skalar * matriks[i][j];
            printf("%d\t", hasilperkalianskalar[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int pilih;

    tampilan();
    printf("Masukkan mode perhitungan: "); scanf("%d", &pilih);
    
    switch (pilih){
    case 1:
        penjumlahan();
        break;
    case 2:
        pengurangan();
        break;
    case 3:
        perkalianmatriks();
        break;
    case 4:
        perkalianskalar();
        break;
    default:
        printf("Masukkan anda tidak sesuai");
        break;
    }
}