#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
    char nm[20],tp[20],svn[20],kd, lg;
    int lm;
    long adm=200000,hrg=0,sewa=0,ttl=0,byr=0,kmbl=0;

    awal:
    clrscr();
    cout<<"PENGINAPAN PASTI BETAH"<<endl;
    cout<<"*********************************"<<endl;
    cout<<"Nama Penyewa       : ";cin>>nm;
    cout<<"Kode Kamar [A/B/M] : ";cin>>kd;

    switch(kd){
    	case 'A':
      case 'a':
    		strcpy(tp,"Anggrek");
         hrg = 300000;
         break;
      case 'B':
      case 'b':
    		strcpy(tp,"Bougenville");
         hrg = 250000;
         break;
      case 'M':
      case 'm':
    		strcpy(tp,"Mawar");
         hrg = 200000;
         break;
      default:
      	cout<<"Kode kamar yang anda masukkan salah"<<endl;
         goto check;
    }
    clrscr();
    cout<<"PENGINAPAN PASTI BETAH"<<endl;
    cout<<"*********************************"<<endl;
    cout<<"Nama Penyewa       : "<<nm<<endl;
    cout<<"Kode Kamar [A/B/M] : "<<kd<<endl;
    cout<<"Lama menginap      : ";cin>>lm;
    cout<<"*********************"<<endl;

    sewa = lm * hrg;
    ttl = sewa + adm;
    if(lm >= 7)
    strcpy(svn,"Payung cantik");
    else
    strcpy(svn,"Tidak ada");


    cout<<"Tipe Kamar         : "<<tp<<endl;
    cout<<"Lama menginap      : "<<lm<<" hari"<<endl;
    cout<<"Souvenir           : "<<svn<<endl;
    cout<<"Biaya Sewa         : "<<sewa<<endl;
    cout<<"Total Biaya Sewa   : "<<ttl<<endl;
    cout<<"*********************"<<endl;

    bayar:
    cout<<"Uang Bayar         : ";cin>>byr;
    if(byr < ttl){
    	cout<<"Uang tidak cukup"<<endl;
      goto bayar;
    }
    kmbl = byr - ttl;
    cout<<"Uang Kembali       : "<<kmbl<<endl;

    check:
    cout<<"Ingin input lagi? [Y/N]"<<endl;
         lg = getchar();
         if(lg == 'Y' || lg == 'y')
         goto awal;
         else if(lg == 'N' || lg == 'n')
         goto end;
         else
         goto check;
    getch();
    end:
}
