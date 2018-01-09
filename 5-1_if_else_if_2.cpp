#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <string>

main()
{
char kd[3],mskp[15];
int kls;
long hrg=0;

cout<<"Masukkan Kode Pesawat [MPT/GRD/BTV] : ";cin>>kd;
cout<<"Kelas Pesawat : ";cin>>kls;
if(strcmp(kd,"MPT") || strcmp(kd,"mpt") || strcmp(kd,"Mpt"))
   {
   	strcpy(mskp,"Merpati");
      if(kls == 1){
      	hrg = 1500000;
      }
   	else if(kls == 2){
   		hrg = 900000;
      }
      else if(kls == 3){
      	hrg = 500000;
      }
      else {
      	cout<<"Kode Kelas Salah"<<endl;
      }

	}
   	else if(strcmp(kd,"GRD") || strcmp(kd,"grd") || strcmp(kd,"Grd"))
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
   else if(strcmp(kd,"BTV") || strcmp(kd,"btv") || strcmp(kd,"Btv"))
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
