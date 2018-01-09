#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
int n1,n2,n3,hsl1,hsl2,hsl3;
cout <<" Masukkan Nilai 1 :";cin>>n1;
cout <<" Masukkan Nilai 2 :";cin>>n2;
cout <<" Masukkan Nilai 2 :";cin>>n3;
hsl1 = n1 + n2 * n3;
hsl2 = n1 + (n2 * n3);
hsl3 = (n1 + n2) * n3;

cout <<"==================================\n";
cout <<"           Hasil Akhir            \n";
cout <<"==================================\n";
cout <<"\n Hasil Akhir : ";
cout <<"\nNilai1 + Nilai2 x Nilai3 : "<<hsl1<<ends;
cout <<"\nNilai1 + (Nilai2 x Nilai3) : "<<hsl2<<ends;
cout <<"\n(Nilai1 + Nilai2) x Nilai3 : "<<hsl3<<ends;
getch();


}