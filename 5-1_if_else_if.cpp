#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
char kd,ukuran,merk[15];
long uang=0,hrg=0,kmbl=0;

cout<<"Kode Baju : ";cin>>kd;
cout<<"Ukuran    : ";cin>>ukuran;
if(kd == '1')
{
	strcpy(merk,"H & R");
   if(ukuran == 'S' || ukuran == 's'){
   	hrg = 45000;
   }
   else {
   	hrg = 60000;
   }
}
else if(kd == '2')
{
	strcpy(merk,"H & R");
   if(ukuran == 'S' || ukuran == 's'){
   	hrg = 65000;
   }
   else {
   	hrg = 75000;
   }
}
else{
	cout<<"Salah Kode Baju"<<endl;
}

cout<<"======================"<<endl;
cout<<"Merk Baju : "<<merk<<endl;
cout<<"Harga Baju : "<<hrg<<endl;
getch();
}
