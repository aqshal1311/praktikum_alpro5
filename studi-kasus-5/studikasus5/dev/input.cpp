#include "../mahasiswa.h"

void ProjectMahasiswa::input(){
  cout << "============= JUMLAH SKS MAHASISWA ============" << endl;
  cout << "Masukkan Nama : "; cin >> nama;
  cout << "Masukkan NIM : "; cin >> nim;
  cout << "Masukkan jumlah matkul yang diambil : "; cin >> jumlah;
  masuk(jumlah);
  cout << "========================================" << endl;
}

void ProjectMahasiswa::masuk(int n){
  if (n == 0){
		}
	else{
		cout << "Masukkan nama matkul	: "; cin >> matkul[n];
		cout << "Masukkan sks matkul	: "; cin >> sks[n];
		masuk(n - 1);
  }
}

int main(){
  ProjectMahasiswa base;
  base.input();
  return 0;
}