#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main(){
 int A[4][2]= {{1,1},{1,1},{1,1},{1,1}};
 int B[4][2]= {{0,1},{2,3},{4,5},{6,7}};
 int i,j;

 cout<<"Matrix A"<<endl;
 for(i=0;i<=3;i++){
 	for(j=0;j<=1;j++)
   {
		cout<<A[i][j]<<" ";
   }
   cout<<endl;
 }
 cout<<endl;
 cout<<"Matrix B"<<endl;
 for(i=0;i<=3;i++){
 	for(j=0;j<=1;j++)
   {
		cout<<B[i][j]<<" ";
   }
   cout<<endl;
 }

 cout<<"Hasil Penjumlahan Matrix A dan B"<<endl;
 for(i=0;i<=3;i++){
 	for(j=0;j<=1;j++)
   {
		cout<<(A[i][j] + B[i][j])<<" ";
   }
   cout<<endl;
 }

 getch();
}
