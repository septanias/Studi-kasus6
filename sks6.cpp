#include <iostream>
using namespace std;
class data{
	public:
		void input();
		void output();
	private:
		char nama[20], matkul[20];
		int tugas[5], uts[5], uas[5], NA[5];
		int k;
};
void data::input(){
	cout<<"Jumlah data : "; cin>>k;
}
void data::output(){
	for (int i=1; i<=k; i++) {
		cout<<"Nilai ke-"<<i<<" = "<<endl;
		cout<<"Nama mahasiswa : ";
		cin>>nama;
		cout<<"Nama mata kuliah : ";
		cin>>matkul;
		cout<<"Daftar nilai : "<<endl;
		cout<<"Nilai tugas (20%)	: "; cin>>tugas[i];
		cout<<"Nilai uts (35%)		: "; cin>>uts[i];
		cout<<"Nilai uas (45%)		: "; cin>>uas[i]; 
		NA[i]=(tugas[i]*0.2)+(uts[i]*0.35)+(uas[i]*0.45);
		cout<<"Nilai akhir		: "<<NA[i]<<endl;
}
}
int main() {
	data nilai;
	nilai.input();
	nilai.output();
}
