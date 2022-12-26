#include <stdio.h>
#include <string.h>

int main(){
    char kata[100], re_kata[100];

    printf("masukkan kata yang hendak diperiksa: "); gets(kata);
    strlwr(kata); //mengecilkan huruf
    strcpy(re_kata, kata); //mengcopy string kata ke re_kata
    strrev(re_kata); //menginversekan string dalam variabel re_kata

    if(strcmp(kata, re_kata) == 0){ //membandingkan kesamaan dan prebedaan antara string kata dan re_kata
        printf("kata termasuk palindrome");
    }else{
        printf("kata bukan palindrome");
    }
}