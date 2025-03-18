#include <iostream> // sebagai library
#include <iomanip>
#include <string>
using namespace std;

struct resto{ //tipe fungsi sebagai pembuatan tipe data bernama resto
	string nama_pelanggan;
	float ayam_goreng;
	float ayam_bakar;
	float tot_bayar;
	float tot_bayar2;
	float bayar;
	float akhir_bayar;
	int jumlah;
	int jumlah2;
};

void displayresto(resto &resto){ // tipe fungsi yang bervariable displayresto dan meengisi pembagian pengurangan dan lain lain pada fungsi ini 

	cout<<"resto keluarga kita"<<endl;
	cout<<"1. ayam goreng : 17.000"<<endl;
	cout<<"2. ayam bakar : 21.000"<<endl;
	
	cout<<"masukan nama konsumen: ";
	cin>>resto.nama_pelanggan;
	resto.ayam_goreng=17000;
	resto.ayam_bakar=21000;
	cout<<"masukan jumlah ayam goreng yang ingin dibeli :";
	cin>>resto.jumlah;
	cout<<"masukan jumlah ayam bakar yang ingin dibeli :";
	cin>>resto.jumlah2;
	
	resto.tot_bayar=(resto.jumlah*resto.ayam_goreng)+(resto.jumlah*resto.ayam_bakar);
	resto.tot_bayar2=(resto.jumlah*resto.ayam_goreng)+(resto.jumlah*resto.ayam_bakar);
	
	if(resto.tot_bayar>=45000){
		resto.akhir_bayar=resto.tot_bayar*90/100;}
	else{
		resto.akhir_bayar=resto.tot_bayar;}
		
	cout<<"anda harus bayar senilai :"<<resto.akhir_bayar;}
	
void strukresto(const resto &resto){ // fungsi  strukreston yang di isi dengan struk
	cout<<"=============================struk================================"<<endl;
	cout<<left<<setw(30)<<"nama pelanggan "<<":"<<resto.nama_pelanggan<<endl;
	cout<<left<<setw(30)<<"total pesanan ayam goreng "<<":"<<resto.jumlah<<endl;
	cout<<left<<setw(30)<<"total pesanan ayam bakar"<<":"<<resto.jumlah2<<endl;
	cout<<left<<setw(30)<<"total bayar"<<":"<< resto.tot_bayar2<<endl;
	cout<<left<<setw(30)<<"total setelah di diskon"<<":" <<resto.akhir_bayar<<endl;
	cout<<"===================================================================="<<endl;
	
}
	
int main(){
	resto resto;
	cout<<"========RESTO RESTO RESTO========"<<endl;
	displayresto(resto);// pemanggialan fungsi displayresto
	cout<<endl;
	strukresto(resto);// pemanggilan struk
}

