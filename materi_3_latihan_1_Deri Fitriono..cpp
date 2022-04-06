#include <iostream>
//deri fitriono (2113030080) 1b//
using namespace std;

int main() {
int a,b,c,d,hasil;

cout<<"masukan nilai ujian pertama :";
cin>>a;

cout<<"masukan nilai ujian kedua :";
cin>>b;

cout<<"masukan nilai ujian ketiga :";
cin>>c;

d=a+b+c;
hasil=d/3;

cout<< "Total Nilai akhir rata rata setelah dibagi 3 ujian adalah : " <<hasil<<endl;

 if (hasil >= 80 ) {
 	cout <<"Anda Mendapat NILAI A" <<endl;
 }
 else {
 	cout <<"Anda Mendapat NILAI B" <<endl;
 }
 
}



