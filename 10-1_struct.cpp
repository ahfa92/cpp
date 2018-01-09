#include<stdio.h>
#include<conio.h>
#include<iostream.h>
main( )
{
struct
{
char nim[5];
char nama[15];
int nilai;
} mahasiswa;
clrscr( );
cout<<"masukan NIM = ";
cin>>mahasiswa.nim;
cout<<"masukan Nama = ";
gets(mahasiswa.nama);
cout<<"masukan Nilai Akhir = ";
cin>>mahasiswa.nilai;
cout<<"\n\nData Yang di Inputkan adalah : \n\n";
cout<<"NIM = "<<mahasiswa.nim<<endl;
cout<<"Nama = "<<mahasiswa.nama<<endl;
cout<<"Nilai Akhir = "<<mahasiswa.nilai<<endl;
getch( );
}