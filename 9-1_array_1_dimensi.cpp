#include <conio.h>
#include <stdio.h>
#include <iostream.h>
#include <iomanip.h>
main( )
{
int i,j,ke;
char nama[5][20];
float nilai1[5];
float nilai2[5];
float hasil[5];
start:
clrscr( );
cout<<"Masukkan jumlah data yang ingin diinput [Max 5] :";cin>>j;
if(j > 5){
cout<<"Jumlah data yang diminta melebihi batas maksimal."<<endl;
cout<<"Harap masukkan jumlah yang sesuai."<<endl;
getch();
goto start;
}
for(i=0;i<j;i++)
{
ke = i + 1;
cout<<"Data Ke - "<<ke<<endl;
cout<<"Nama Siswa : "; gets(nama[i]);
cout<<"Nilai MidTest : "; cin>>nilai1[i];
cout<<"Nilai Final : "; cin>>nilai2[i];
hasil[i] = (nilai1[i] * 0.40)+ (nilai2[i] * 0.60);
cout<<endl;
}
cout<<"------------------------------------------"<<endl;
cout<<"No.\tNama Siswa\tNilai\tNilai\t";
cout<<"Hasil"<<endl;
cout<<"\t\t\tMidTest\tFinal\t";
cout<<"Ujian"<<endl;
cout<<"------------------------------------------"<<endl;
for(i=0;i<j;i++)
{
ke = i + 1;
cout<<setiosflags(ios::left)<<setw(4)<<ke<<"\t";
cout<<setiosflags(ios::left)<<setw(10)<<nama[i]<<"\t";
cout<<setprecision(2)<<" "<<nilai1[i]<<"\t";
cout<<setprecision(2)<<" "<<nilai2[i]<<"\t";
cout<<setprecision(2)<<" "<<hasil[i]<<endl;
}
cout<<"------------------------------------------"<<endl;
getch();
}