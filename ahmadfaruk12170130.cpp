#include<stdio.h>
#include<iomanip.h>
#include<conio.h>
#include<iostream.h>

float hasil(float a, float b);

header(){
cout<<setw(30)<<"LATIHAN C++"<<endl;
cout<<setw(30)<<"================================================="<<endl;

}

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

   header();
   cout<<"Masukkan jumlah data : ";scanf("%d",&j);

   for(i=1; i<=j; i++)
   {
   	cout<<"Data Ke           = "<<i<<endl;
      cout<<"masukan NIM       = "; cin>>mhs[i].nim;
      cout<<"masukan Nama      = "; cin>>mhs[i].nama;
      cout<<"masukan Nilai UTS = "; cin>>mhs[i].uts;
      cout<<"masukan Nilai UAS = "; cin>>mhs[i].uas;
      cout<<endl;
      mhs[i].hasil = hasil(mhs[i].uts,mhs[i].uas);
   }

   clrscr();
   header();
   cout<<setw(5)<<"NO";
      cout<<setw(10)<<"NIM";
      cout<<setw(10)<<"Nama";
      cout<<setw(20)<<"Nilai Akhir";
      cout<<setw(10)<<"Ket";
      cout<<endl;

   for(i=1; i<=j; i++)
   {
      cout<<setw(5)<<i;
      cout<<setw(10)<<mhs[i].nim;
      cout<<setw(10)<<mhs[i].nama;
      cout<<setw(20)<<mhs[i].hasil;
      if(mhs[i].hasil > 70){
      cout<<setw(10)<<"LULUS";
      }else{
       cout<<setw(10)<<"GAGAL";
      }
      cout<<endl;

	}

	getch();

}

float hasil(float a, float b){
	return (a + b) / 2 ;
}





