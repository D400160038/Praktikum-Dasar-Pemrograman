#include<stdio.h>

int h1,h2,h3;
int total;
int j1;j2;j3;
char b1[200],b2[200],b3[200];
float Discount;
int total_bayar;
int harga1,harga2,harga3;

void input(){
printf("BARANG YANG DIBELI : \n\n");
printf("1. Barang \t: ");
scanf("%s",&b1);
printf("Jumlah \t: ");
scanf("%d",&j1);
printf("Harga \t: ");
scanf("%d",&h1);
printf("2. Barang \t: ");
scanf("%s",&b2);
printf("Jumlah \t: ");
scanf("%d",&j2);
printf("Harga \t: ");
scanf("%d",&h2);
printf("3. Barang \t: ");
scanf("%s",&b3);
printf("Jumlah \t: ");
scanf("%d",&j3);
printf("Harga \t: ");
scanf("%d",&h3);
harga1=j1*h1;
harga2=j2*h2;
harga3=j3*h3;
}

void totalbayar(){
total=harga1+harga2+harga3;
printf("Total \t \t: %d \n\n",total);
Discount=0.05*total;
printf("Discount 5 percent\t: ");
total_bayar=total-Discount;
printf("Total Bayar \t: %d \n",total_bayar);
}

void isi(){
printf(" No.  Nama Barang  Jumlah  Harga(Rp)\n");
printf(" 1.        %s \t     %d       %d  \n",b1,j1,harga1);
printf(" 2.        %s \t     %d       %d  \n",b2,j2,harga2);
printf(" 3.        %s \t     %d       %d  \n",b3,j3,harga3);
}

void judul(){
puts("           Selamat Berbelanja");
puts("           ALFAMART GARUDA MAS");
puts("============================================");
}

void baris(){
puts("-------------------------------------------");
}

void penutup(){
puts("-------------------------------------------");
puts("                Terima Kasih");
puts("          Barang yang sudah dibeli");
puts("          tidak dapat dikembalikan");
}

void main(){
input();
system ("cls");
judul();
isi();
baris();
totalbayar();
penutup();
}
