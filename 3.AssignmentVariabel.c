#include <stdio.h>

/*pemberian nilai variabel dengan assignment dimulai dengan melakukan pendeklarasian variabel dan tipe datanya terlebih dahulu
kemudian diberikan nilai variabel pada fungsi int main dengan memberikan perintah bahwa suatu variabel diisi oleh suatu nilai*/

int i; //deklarasi variabel i dengan tipe data int
float j; //deklarasi variabel j dengan tipe data float
char k; //deklarasi variabel k dengan tipe data char

int main()
{
    int i; //deklarasi variabel i dengan tipe data int
    float j; //deklarasi variabel j dengan tipe data float
    char k; //deklarasi variabel k dengan tipe data char
    char l;

    i = 6; //pemberian nilai variabel i dengan 6
    j = 1.5E4; //pemberian nilai variabel j dengan 7.00
    k = 'a'; //pemberian nilai variabel k dengan karakter k
    l = 65; //pemberian nilai ASCII karakter pada variabel l


    printf("nilai i = %i \n", i); //pemanggilan nilai variabel i berupa int yaitu dengan %d atau %i
    printf("nilai j = %.2f \n", j); //pemanggilan nilai variabel j berupa float yaitu dengan %f atau (%.nf) dengan n = jumlah angka dibelakang koma
    printf("karakter k = %c \n", k); //pemanggilan nilai variabel k berupa karakter yaitu dengan %c
    printf("nilai ASCII k = %d \n", k); //pemanggilan nilai variabel k berupa nilai ASCII dengan %d
    printf("karakter l = %c \n", l); //pemanggilan nilai variabel l berupa karakter yaitu dengan %c
    printf("nilai ASCII l = %d \n", l); //pemanggilan nilai variabel l berupa nilai ASCII dengan %d
    return 0; //pengembalian nilai 0
}