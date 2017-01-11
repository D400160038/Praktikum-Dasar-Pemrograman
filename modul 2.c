#include<stdio.h>

int main(){

char nilai;
printf("Mencari Hari\n");
printf("Masukan Angka [1-7] : ");
scanf("%c",&nilai);

switch(nilai)
{
    case 1 : puts("Hari Minggu");break;
    case 2 : puts("Hari Senin");break;
    case 3 : puts("Hari Selasa");break;
    case 4 : puts("Hari Rabu");break;
    case 5 : puts("Hari Kamis");break;
    case 6 : puts("Hari Jumat");break;
    case 7 : puts("Hari Sabtu");break;
    default : puts("Angka Yang Anda Masukan Salah");
}
return 0;
}
