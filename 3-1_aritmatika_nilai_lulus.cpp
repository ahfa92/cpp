#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
char *lulus;
int a,b,c,d;
float hsl1,hsl2,hsl3,hsl4,total;
cout <<" Masukkan Nilai Absen :";cin>>a;
cout <<" Masukkan Nilai Tugas :";cin>>b;
cout <<" Masukkan Nilai UTS   :";cin>>c;
cout <<" Masukkan Nilai UAS   :";cin>>d;
hsl1 = a * 20 / 100;
hsl2 = b * 25 / 100;
hsl3 = c * 25 / 100;
hsl4 = d * 30 / 100;
total = hsl1 + hsl2 + hsl3 + hsl4;
if(total > 75){
  lulus = "Lulus";
} else {
  lulus = "Tidak Lulus";
}
cout <<"==================================\n";
cout <<"           Hasil Akhir            \n";
cout <<"==================================\n";
cout <<"\n Hasil Akhir : ";
cout <<"\nNilai Absen : "<<a<<" x 20% = "<<hsl1<<ends;
cout <<"\nNilai Tugas : "<<b<<" x 25% = "<<hsl2<<ends;
cout <<"\nNilai UTS   : "<<c<<" x 25% = "<<hsl3<<ends;
cout <<"\nNilai UAS   : "<<d<<" x 30% = "<<hsl4<<ends;
cout <<"\nTotal       : "<<total<<ends;
cout <<"\nLulus       : "<<lulus<<ends;
getch();


}