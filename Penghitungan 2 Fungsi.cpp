#include <iostream> 
#include <conio.h>
using namespace std;
//Zulfikar Hidayatullah

float perhitungan (float na, float nb,int jenis){
	float hasil;
	
	if (jenis == 1){
		hasil = na + nb;
	}
	
	else if (jenis == 2){
		hasil = na - nb;
	}
	
	else if (jenis == 3){
		hasil = na * nb;
	}
	
	else if (jenis == 4){
		hasil = na / nb;
	}
	
	return hasil;
}

int main (){
	float a,b,yipe,hasil_akhir;

	cout <<"Program perhitungan Matematika\n";
	cout <<"-------------------------------\n"<<endl;
	
	cout << " Pilih tipe penghitungan menggunakan (angka) : \n"<<endl;
	cout << "1. Penjumlahan"<<endl;
	cout << "2. Pengurangan"<<endl;
	cout << "3. Perkalian"<<endl;
	cout << "4. Pembagian"<<endl;
	cout << "Masukan tipe penghitungan = ";
	cin >> yipe;
	cout << "\nMasukan nilai A = ";
	cin >> a;
	
	cout << "\nMasukan Nilai B = ";
	cin >>b;
	
	hasil_akhir = perhitungan (a,b,yipe);
	cout << "\n\n\nHasil dari perhitungan tersebut adalah = "<<hasil_akhir;
}
