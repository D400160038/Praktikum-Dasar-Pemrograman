#include<stdio.h>
char layanan[4][8] = {"Go Ojek","Go Grab","Go Food","Go Send"};
float tarif[4]={5000,15000,3000,5000};
void tampil(){
    int i;
    printf("-----------------------------------------\n\n");
    printf("|\t\tGOJEK\t\t\t|\n");
    printf("-----------------------------------------\n");
    printf("|Kode\t| Layanan\t| Tarif\t\t|\n");
    for(i=0;i<4;i++){
        printf("| %d\t| %s\t| %0.f/km\t|\n",i+1,layanan[i],tarif[i]);
    }
    printf("-----------------------------------------\n");
}

void main(){int kode,ko;
float jarak,totalbayar;
char nama[25],email[50];
system("COLOR a");
system("TITLE APLIKASI GO-JEK");
    tampil();
printf("\nMasukan Kode Layanan\t=");
scanf("%d",&ko);
printf("Masukan Jarak\t\t=");
scanf("%f",&jarak);
printf("Masukan Nama\t\t=");
scanf("%s",&nama);
printf("Masukan Email\t\t=");
scanf("%s",&email);
    kode=ko-1;
system("cls");
printf("-----------------------------------------------\n\n");
printf("\t\t\tGO-JEK\n");
printf("-----------------------------------------------\n");
printf("Nama\t\t= %s\t\t\t|\n",nama);
printf("Email\t\t= %s\t|\n",email);
printf("Layanan\t\t= %s\t\t\t|\n",layanan[kode]);
printf("Tarif per KM\t= Rp%0.f\t\t\t|\n",tarif[kode]);
totalbayar=tarif[kode]*jarak;
printf("Total Harga\t Rp.%2.f\t\t\t|\n",totalbayar);
printf("-----------------------------------------------\n");
}
