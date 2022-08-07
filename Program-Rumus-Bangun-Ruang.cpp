#include <iostream>

using namespace std;

int main () {
	 	int ulangi;

 do {
 	ulangi = 0;
 	int bangunRuang;
	int typeRumus;
	string jenisBangunan[] = {"Persegi", "Persegi Panjang", "Segitiga", "Jajar Genjang", "Belah Ketupat", "Trapesium", "Lingkaran"};
	cout<<jenisBangunan[1]<<endl; 
	
	cout<<"=========================================="<<endl;
	cout<<"PROGRAM PERHITUNGAN LUAS / KELILING BANGUN DATAR WITH C++"<<endl;
	cout<<"1. Persegi\n2. Persegi Panjang\n3. Segitiga\n4. Jajar Genjang\n5. Belah Ketupat\n6. Trapesium\n7. Lingkaran"<<endl;
	cout<<"Harap Masukan Nilai Angka Berdasarkan Bangun Datar Yang Anda Pilih : ";
	cin>>bangunRuang;
	
	bool kondisi = bangunRuang == 1 or bangunRuang == 2 or bangunRuang == 3 or bangunRuang == 4 or bangunRuang == 5 or bangunRuang == 6 or bangunRuang == 7 or bangunRuang;
	if (kondisi) {			
		
								cout<<"======================================"<<endl;
								cout<<"Anda Telah Memilih Bangun Datar "<<jenisBangunan[bangunRuang - 1]<<endl;
					
								
								switch (bangunRuang - 1) {
//									PROGRAM UNTUK BANGUN DATAR PERSEGI
									case 0 : 
										int angka;
									
										cout<<"Berikut Rumus Persegi Yang Ada : "<<endl;
										cout<<"1. Keliling Persegi\n2. Luas Persegi\n"<<endl;
										cout<<"Masukan Angka Sesuai Rumus Yang Ingin Dicari : "<<endl;
										cin>>angka;
										cout<<"\n";
										
											if (angka == 1) {
												cout<<"RUMUS KELILING PERSEGI  = 4 x S"<<endl;
												int sisi;
												cout<<"Masukan Sisi Persegi : ";
												cin>>sisi;
												cout<<"Kll = 4 x "<<sisi<<endl;
												cout<<"Kll = "<< 4 * sisi<<endl;
											} else if (angka == 2) {
													cout<<"RUMUS LUAS PERSEGI  = S x S"<<endl;
													int sisi;
													cout<<"Masukan Sisi Persegi : ";
													cin>>sisi;
													cout<<"L = "<<sisi<< " x "<<sisi<<endl;
													cout<<"L = "<<sisi * sisi<<endl;
											}
											break;
									case 1:
									
											cout<<"Berikut Rumus Persegi Panjang Yang Ada : "<<endl;
											cout<<"1. Keliling Persegi Panjang\n2. Luas Persegi Panjang\n"<<endl;
											cout<<"Masukan Angka Sesuai Rumus Yang Ingin Dicari : "<<endl;
											cin>>angka;
											cout<<"\n";

										
												if (angka == 1) {
													cout<<"RUMUS KELILING PERSEGI PANJANG = 2 (P + L)"<<endl;
													int panjang;
													cout<<"Masukan  Panjang Persegi : ";
													cin>>panjang;
													int lebar;
													cout<<"Masukan Lebar Persegi : ";
													cin>>lebar;
													
													cout<<"Kll = 2 x ("<<panjang<<" + "<<lebar<<")"<<endl;
													cout<<"Kll = "<< 2*(panjang + lebar)<<endl;
													
												} else if (angka == 2) {
													cout<<"RUMUS LUAS PERSEGI PANJANG = P x L"<<endl;	
													int panjang;
													cout<<"Masukan  Panjang Persegi : ";
													cin>>panjang;
													int lebar;
													cout<<"Masukan Lebar Persegi : ";
													cin>>lebar;
													
													cout<<"L ="<<panjang<<" x "<<lebar<<endl;
													cout<<"L ="<<panjang * lebar<<endl;
												}
											break;
											
									case 2 :
											cout<<"Berikut Rumus Segitiga Yang Ada : "<<endl;
											cout<<"1. Keliling Segitiga\n2. Luas Segitiga\n"<<endl;
											cout<<"Masukan Angka Sesuai Rumus Yang Ingin Dicari : "<<endl;
											cin>>angka;
											cout<<"\n";
											
												if (angka == 1) {
													cout<<"RUMUS KELILING SEGITIGA = (A+B+C) DENGAN A,B,C ADALAH NILAI 3 SISI"<<endl;
													int sisi1, sisi2, sisi3;
													cout<<"Masukan Nilai Sisi Pertama : ";
													cin>>sisi1;
													cout<<"Masukan Nilai Sisi Kedua : ";
													cin>>sisi2;
													cout<<"Masukan Nilai Sisi Ketiga : ";
													cin>>sisi3;
													
													cout<<"Kll = "<<sisi1<<" + "<<sisi2<<" + "<<sisi3<<endl;
													cout<<"Kll = "<<sisi1 + sisi2 + sisi3<<endl;
												} else if (angka == 2) {
													cout<<"RUMUS LUAS SEGITIGA = 1/2 x ALAS X TINGGI"<<endl;
													int alas, tinggi;
													cout<<"Masukan Nilai Alas : ";
													cin>>alas;
													cout<<"Masukan Nilai Tinggi : ";
													cin>>tinggi;
													cout<<"L = 1/2 x "<<alas<<" x "<<tinggi<<endl;
													cout<<"L = "<< 0.5 * alas * tinggi<<endl;
												}
												
										break;
										
										case 3 :
											cout<<"Berikut Rumus Jajar Genjang Yang Ada : "<<endl;
											cout<<"1. Keliling Jajar Genjang\n2. Luas Jajar Genjang\n"<<endl;
											cout<<"Masukan Angka Sesuai Rumus Yang Ingin Dicari : "<<endl;
											cin>>angka;
											cout<<"\n";
											
												if (angka == 1) {
													cout<<"RUMUS KELILING JAJAR GENJANG = 2 x (ALAS + SISI MIRING)"<<endl;
													int alas,sisi;
													cout<<"Masukan Nilai Alas : ";
													cin>>alas;
													cout<<"Masukan Nilai Sisi Miring : ";
													cin>>sisi;
													
													cout<<"Kll = 2 x "<<alas<<" x "<<sisi<<endl;
													cout<<"Kll = "<<2 * alas * sisi<<endl;
												} else if (angka == 2) {
													cout<<"RUMUS LUAS JAJAR GENJANG = ALAS x TINGGI"<<endl;
													int alas, tinggi;
													cout<<"Masukan Nilai Alas : ";
													cin>>alas;
													cout<<"Masukan Nilai Tinggi : ";
													cin>>tinggi;
													cout<<"L = "<<alas<<" x "<<tinggi<<endl;
													cout<<"L = "<<alas * tinggi<<endl;
												}
												
										break;
										case 4 : 
											cout<<"Berikut Rumus Belah Ketupat Yang Ada : "<<endl;
											cout<<"1. Keliling Belah Ketupat\n2. Luas Belah Ketupat\n"<<endl;
											cout<<"Masukan Angka Sesuai Rumus Yang Ingin Dicari : "<<endl;
											cin>>angka;
											cout<<"\n";
											
											if (angka == 1) {
												 cout<<"RUMUS KELILING BELAH KETUPAT  = 4 x SISI"<<endl;
												 int sisi;
												 cout<<"Masukan Nilai Sisi : ";
												 cin>>sisi;
												 
												 cout<<"Kll = 4 x "<<sisi<<endl;
												 cout<<"Kll = "<<4 * sisi<<endl;
											} else if (angka == 2) {
												cout<<"RUMUS LUAS BELAH KETUPAT = ALAS x TINGGI"<<endl;
													int alas, tinggi;
													cout<<"Masukan Nilai Alas : ";
													cin>>alas;
													cout<<"Masukan Nilai Tinggi : ";
													cin>>tinggi;
													cout<<"L = "<<alas<<" x "<<tinggi<<endl;
													cout<<"L = "<<alas * tinggi<<endl;
											}
											
										break;
										case 5 :
											cout<<"Berikut Rumus Trapesium Yang Ada : "<<endl;
											cout<<"1. Keliling Trapesium\n2. Luas Trapesium\n"<<endl;
											cout<<"Masukan Angka Sesuai Rumus Yang Ingin Dicari : "<<endl;
											cin>>angka;
											cout<<"\n";
											
												if (angka == 1) {
													cout<<"RUMUS KELILING TRAPESIUM = AB + BC + CD + AD (ABCD ADALAH SUMBU DARI TRAPESIUM)"<<endl;
													int ab,bc,cd,ad;
													cout<<"Masukan Nilai AB : ";
													cin>>ab;
													cout<<"Masukan Nilai BC : ";
													cin>>bc;
													cout<<"Masukan Nilai CD : ";
													cin>>cd;
													cout<<"Masukan Nilai AD : ";
													cin>>ad;
													
													cout<<"Kll = "<<ab<<" + "<<bc<<" + "<<cd<<" + "<<ad<<endl;
													cout<<"Kll = "<<ab+bc+cd+ad<<endl;
												} else if (angka == 2) {
													cout<<"RUMUS LUAS TRAPESIUM = L = 1/2 x t x ( AB + CD) DENGAN NILAI ABCD ADALAH PANJANG SISI SISI LAIN NYA"<<endl;
													int t, ab, cd;
													cout<<"Masukan Nilai Tinggi : ";
													cin>>t;
													cout<<"Masukan Nilai AB : ";
													cin>>ab;
													cout<<"Masukan Nilai CD : ";
													cin>>cd;
													
													
													cout<<"L = 1/2 x "<<t<<" ("<<ab<< " + "<<cd<<")"<<endl;
													cout<<"L = "<<0.5 * t * (ab + cd)<<endl;
													
													
												}
									break;
									case 6 :
											cout<<"Berikut Rumus Lingkaran Yang Ada : "<<endl;
											cout<<"1. Keliling Lingkaran\n2. Luas Lingkaran\n"<<endl;
											cout<<"Masukan Angka Sesuai Rumus Yang Ingin Dicari : "<<endl;
											cin>>angka;
											cout<<"\n";
											
											if (angka == 1) {
												int r;
												cout<<"RUMUS KELILING LINGKARAN = 2 x Phi x Jari - Jari"<<endl;
												cout<<"Masukan Jari- Jari Lingkaran : ";
												cin>>r;
												
												cout<<"Kll = "<<"2 x 3,14 x "<<r<<endl;
												cout<<"Kll = "<< 2 * 3.14 * r<<endl;
											} else if (angka == 2) {
												cout<<"RUMUS LUAS LINGKARAN = Phi x (Jari - Jari x Jari - Jari)"<<endl;
												int r;
												cout<<"Masukan Jari - Jari Lingkaran : ";
												cin>>r;
												
												cout<<"L = 3,14 x "<<r<< " x "<<r<<endl;
												cout<<"L = "<<3.14 * r * r<<endl;
											}
											
											
											
								}

								
								
								
								cout<<"Ulangi Program ? (1 for yes/2 for no) : ";
								cin>>ulangi;
	
			} 

	
	

			
 } while (ulangi == 1);
			
			
			cout<<"=================================="<<endl;
			cout<<"Program Selesai !"<<endl;
			

	
	
};
