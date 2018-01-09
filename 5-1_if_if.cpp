#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <string>

main()
{
string kd,mskp;
char kls;
int qty;
long hrg=0,total=0;

mskp = "NULL";

while(mskp == "NULL"){
cout<<"Masukkan Kode Pesawat [MPT/GRD/BTV] : ";cin>>kd;
cout<<"Kelas Pesawat : ";cin>>kls;
if(kd=="MPT")
   {
   	mskp = "Merpati";
      if(kls == '1'){
      	hrg = 1500000;
      }
   	else if(kls == '2'){
   		hrg = 900000;
      }
      else if(kls == '3'){
      	hrg = 500000;
      }
      else {
      	cout<<"Kode Kelas Salah"<<endl;
      }

	}
   	else if(kd == "GRD")
   {
		mskp = "Garuda";
   	if(kls == '1'){
   		hrg = 1200000;
   	}
      else if(kls == '2'){
   		hrg = 800000;
	   }
      else if(kls == '3'){
      	hrg = 400000;
      }
      else {
   		cout<<"Kode Kelas Salah"<<endl;
      }

   }
   else if(kd == "BTV")
   {
     	mskp = "Batavia";
      if(kls == '1'){
      	hrg = 1000000;
      }
      else if(kls == '2'){
      	hrg = 700000;
      }
      else if(kls == '3'){
      	hrg = 300000;
      }
      else {
   		cout<<"Kode Kelas Salah"<<endl;
      }

	}
	else {
   	cout<<"Kode Maskapai Salah"<<endl;
	}
}
cout<<"======================"<<endl;
cout<<"Nama Pesawat  : "<<mskp<<endl;
cout<<"Harga Tiket   : "<<hrg<<endl;
cout<<"Jumlah Tiket  : ";cin>>qty;
cout<<"======================"<<endl;
total = qty
getch();
}
