#include<stdio.h>
#include<conio.h>
#include<iostream.h>

char huruf(float h);
float hasil(float a, float b);

main( )
{
	int i,j;

	struct
   {
		char nim[5];
		char nama[15];
		float uts, uas, hasil;
	} mhs[5];

   clrscr();

   cout<<"Masukkan banyaknya data yang ingin dimasukkan : ";scanf("%d",&j);

   for(i=1; i<=j; i++)
   {
   	cout<<"Data Ke - "<<i<<endl;
      cout<<"masukan NIM = "; cin>>mhs[i].nim;
      cout<<"masukan Nama = "; cin>>mhs[i].nama;
      cout<<"masukan Nilai UTS = "; cin>>mhs[i].uts;
      cout<<"masukan Nilai UAS = "; cin>>mhs[i].uas;
      cout<<endl;
      mhs[i].hasil = hasil(mhs[i].uts,mhs[i].uas);
   }

   clrscr();

   for(i=1; i<=j; i++)
   {
   	cout<<"Data Ke - "<<i<<endl;
      cout<<"NIM = "<<mhs[i].nim<<endl;
      cout<<"Nama = "<<mhs[i].nama<<endl;
      cout<<"Nilai UTS = "<<mhs[i].uts<<endl;
      cout<<"Nilai UAS = "<<mhs[i].uas<<endl;
      cout<<"Nilai Hasil Akhir = "<<mhs[i].hasil<<endl;
      cout<<"Keterangan yang didapat = ";
      cout<<huruf(mhs[i].hasil)<<endl;
      cout<<endl;
	}

	getch();

}

float hasil(float a, float b){
	return (a * 0.4) + (b * 0.6);
}

char huruf(float h)
{
	if(h >= 80)
		return 'A';
	else if(h >= 70)
		return 'B';
	else if(h >= 56)
		return 'C';
	else if(h >= 47)
		return 'D';
	else
	return 'E';
}

