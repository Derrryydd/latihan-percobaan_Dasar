#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int tv ;
	
	cout<<"*****Daftar Channel TELEVISI*****"<<endl;
	cout<<"1.RCTI"<<endl;
	cout<<"2.ANTV"<<endl;
	cout<<"3.Trans TV"<<endl;
	cout<<"4.NET TV"<<endl;
	cout<<"-----------------------------"<<endl;
	
	cout<<"masukan Channel Pilihan = ";
	cin>>tv;
	
	switch (tv) {
		case 1:
			cout<<"channel yang anda pilih adalah RCTI"<<endl;
			break;
		case 2:
			cout<<"Channel yang anda pilih adalah ANTV"<<endl;
			break;
		case 3:
			cout<<"Channel yang anda pilih adalah Trans TV"<<endl;
			break;
		case 4:
			cout<<"Channel yang anda pilih adalah NET TV"<<endl;
			break;
	
	default :
		cout<<"Channel yang anda pilih Tidak ada"<<endl;
	}
	getch();
}

