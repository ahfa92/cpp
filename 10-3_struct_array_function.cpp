#include<stdio.h>
#include<conio.h>
#include<iostream.h>

char ket(float n);

main( )
{
	int i;

	struct
   {
		char nim[5];
		char nama[15];
		float nilai;
	} mhs[5];

   clrscr();

   for(i=1; i<2; i++)
   {
   	cout<<"Data Ke - "<<i++<<endl;
      cout<<"masukan NIM = "; cin>>mhs[i].nim;
      cout<<"masukan Nama = "; cin>>mhs[i].nama;
      cout<<"masukan Nilai Akhir = "; cin>>mhs[i].nilai;
      cout<<endl;
   }

   clrscr();

   for(i=1; i<2; i++)
   {
   	cout<<"Data Ke - "<<i++<<endl;
      cout<<"NIM = "<<mhs[i].nim<<endl;
      cout<<"Nama = "<<mhs[i].nama<<endl;
      cout<<"Nilai Akhir = "<<mhs[i].nilai<<endl;
      cout<<"Keterangan yang didapat = ";
      cout<<ket(mhs[i].nilai)<<endl;
      cout<<endl;
	}

	getch();

}

char ket(float n)
{
	if(n > 65)
		return 'L';
	else
	return 'G';
}

