#include<iostream>
#include<string>

using namespace std;

int main() 
{ 
	string namabarang;
	double harga,jumlahjual,totalharga,diskon,totalbayar;
	
	cout<< "\KEDE STRIPING MOBIL";
	cout<< "\n~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<< "nama barang:";
	getline(cin, namabarang);
	cout<< "harga:";
	cin>>harga;
	cout<< "jumlah jual:";
	cin>>jumlahjual;
	
	
	totalharga = harga*jumlahjual;
	diskon = totalharga*0.25;
	
	cout<<"total harga:"<<totalharga<<endl;
	cout<<"diskon:"<<diskon<<endl;
	cout<<"total harga:"<<totalharga<<endl;
	
	
	return 0;
	
}




