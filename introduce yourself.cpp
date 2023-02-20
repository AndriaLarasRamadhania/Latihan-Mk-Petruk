#include <iostream>
using namespace std;
int main (){
 string a;
 cout<<"Nama Lengkap : ";
 getline (cin,a);
 
 string b;
 cout<<"Kelas : ";
 getline(cin,b);
 
 string c;
 cout<<"Input Nilai DDP : ";
 getline (cin,c);  
 
 	cout<<"Izin memperkenalkan diri nama saya"<<a<< "dengan jumlah huruf 24. Saya mahasiswa S1 Ilmu komputer dari kelas"<<b<< ". Nilai DDP saya adalah "<<c;
    
 return 0;
}
