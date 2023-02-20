#include<iostream>
using namespace std;
int main(){
	string nama, kelas;
	float nilaiDDP;
	int p_nama;
	
	getline(cin,nama);
	cin>>kelas;
	cin>>nilaiDDP;
	p_nama = nama.length();
	
	cout<<endl;
	cout<<"Izin memperkenalkan diri nama saya "<<nama<<" dengan jumlah huruf "<<p_nama<<
	". Saya mahasiswa S1 Ilmu Komputer dari kelas "<<kelas<<". Nilai DDP saya adalah "<<nilaiDDP;
	
	return 0;
}
