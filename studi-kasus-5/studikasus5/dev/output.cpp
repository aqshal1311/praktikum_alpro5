#include "../mahasiswa.h"

void ProjectMahasiswa::output(){
  cout << "Nama : " << nama << endl;
  cout << "NIM : " << nim << endl;
  cout << "========================================" << endl;
  keluar(jumlah);
  cout << "========================================" << endl;
  cout << "Total sks = " << total << " sks" << endl;
  cout << "Total biaya = Rp." << bayar << endl; 
  cout << "========================================" << endl;
}

void ProjectMahasiswa::keluar(int n){
  cout << matkul[n] << " (" << sks[n] << " sks)" << endl;
  keluar(n - 1)
}

int main(){
  ProjectMahasiswa base;
  base.output();
  return 0;
}