#include "../mahasiswa.h"

void ProjectMahasiswa::proses(){
  hitung(jumlah);
  bayar = total * 125000;
  diskon =bayar*0.2;
  totalb=bayar-diskon;
};

void ProjectMahasiswa::hitung(int n){
  if (n == 0){
	}
		else{
		total += sks[n];
		hitung (n - 1);
  }
}

int main(){
  ProjectMahasiswa base;
  base.proses();
  return 0;
}