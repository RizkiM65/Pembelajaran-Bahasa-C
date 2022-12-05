#include <stdio.h>

/*inisiasi merupakan cara pengisian atau pemberian nilai variabel dengan cara mengdeklarasikan nilai
variabel itu sendiri*/ 

int main()
{
    int i = 6; //variabel i dengan tipe data integer (int) atau bilangan bulat
    float j = 7.0; //variabel j dengan tipe data float atau bilangan riil
    char k = 'u'; //variabel k dengan tipe data karakter (char) atau mengandung karakter
    char l = 65; //variabel l dengan tipe data karakter dan nilai ASCII dari karakter yaitu 65

    printf("nilai i = %i \n", i); //pemanggilan nilai variabel i berupa int yaitu dengan %d atau %i
    printf("nilai j = %.2f \n", j); //pemanggilan nilai variabel j berupa float yaitu dengan %f atau (%.nf) dengan n = jumlah angka dibelakang koma
    printf("karakter k = %c \n", k); //pemanggilan nilai variabel k berupa karakter yaitu dengan %c
    printf("nilai ASCII k = %d \n", k); //pemanggilan nilai variabel k berupa nilai ASCII dengan %d
    printf("karakter l = %c \n", l); //pemanggilan nilai variabel l berupa karakter yaitu dengan %c
    printf("nilai ASCII l = %d \n", l); //pemanggilan nilai variabel l berupa nilai ASCII dengan %d
    return 0; //pengembalian nilai 0
}