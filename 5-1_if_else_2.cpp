#include <stdio.h>
#include <conio.h>
#include <iostream.
h>

main()
{
char kd[5];
char kls,mskp[15];
long hrg=0;

cout<<"Masukkan Kode Pesawat [MPT/GRD/BTV] : ";cin>>kd;
cout<<"Kelas Pesawat : ";cin>>kls;
if(kd=="MPT")
   {
   	strcpy(mskp,"Merpati");
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
		strcpy(mskp,"Garuda");
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
     	strcpy(mskp,"Batavia");
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

cout<<"======================"<<endl;
cout<<"Nama Pesawat  : "<<mskp<<endl;
cout<<"Harga Tiket   : "<<hrg<<endl;
getch();
}
