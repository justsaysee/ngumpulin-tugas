#include <iostream> // sebagai header
#include <iomanip>
#include <string>
using namespace std;

struct KTP{  //sebagai fungsi pembuatan sebuah variable KTP dengan isi seperti string nik string nama dll
	string nik; //memberikan variabel nik pada tipe data string
	string nama;
	string tempat_tanggal_lahir;
	string jenis_kelamin;
	string gol_darah;
	string alamat;
	string rt_rw;
	string kel_desa;
	string kecamatan;
	string agama;
	string status_perkawinan;
	string pekerjaan;
	string kewarganegaraan;
	string berlaku_hingga;
};

void inputKTP(KTP &ktp){  //sebagai fungsi ber variablle KTP untuk mengisi sebuah data
	cout<<"masukkan nik:";
	getline(cin, ktp.nik); //  agar bisa banyak menginput serta digunakan untuk menginput variable nik
	cout<<"masukan nama:";
	getline(cin, ktp.nama);
	cout<<"masukkan tempat tanggal lahir:";
	getline(cin, ktp.tempat_tanggal_lahir);
	cout<<"masukkan jenis kelamin:";
	getline(cin, ktp.jenis_kelamin);
	cout<<"masukkan gol darah:";
	getline(cin, ktp.gol_darah);
	cout<<"masukkan alamat:";
	getline(cin, ktp.alamat);
	cout<<"masukkan rt rw:";
	getline(cin, ktp.rt_rw);
	cout<<"masukkan kel desa:";
	getline(cin, ktp.kel_desa);
	cout<<"masukkan kecamatan:";
	getline(cin, ktp.kecamatan);
	cout<<"masukkan agama:";
	getline(cin, ktp.agama);
	cout<<"masukkan status perkawinan:";
	getline(cin, ktp.status_perkawinan);
	cout<<"masukkan pekerjaan:";
	getline(cin, ktp.pekerjaan);
	cout<<"masukkan kewarganegaraan:";
	getline(cin, ktp.kewarganegaraan);
	cout<<"masukkan berlaku hingga:";
	getline(cin, ktp.berlaku_hingga);
}

void displayKTP(const KTP &ktp){ //sebagai fungsi ber variablle displayKTP dengan isi hasil dari semua yang teallh di isi diatas
	cout<<"\n===============SIMULASI KTP===============\n";
	cout<<left<<setw(20)<<"nik"<<": "<<ktp.nik<<endl;
	cout<<left<<setw(20)<<"nama"<<": "<<ktp.nama<<endl;
	cout<<left<<setw(20)<<"tempat/tanggal lahir"<<": "<<ktp.tempat_tanggal_lahir<<endl;
	cout<<left<<setw(20)<<"jenis kelamin"<<": "<<ktp.jenis_kelamin<<endl;
	cout<<left<<setw(20)<<"gol darah"<<": "<<ktp.gol_darah<<endl;
	cout<<left<<setw(20)<<"alamat"<<": "<<ktp.alamat<<endl;
	cout<<left<<setw(20)<<"rt/rw"<<": "<<ktp.rt_rw<<endl;
	cout<<left<<setw(20)<<"kel/desa"<<": "<<ktp.kel_desa<<endl;
	cout<<left<<setw(20)<<"kecamatan"<<": "<<ktp.kecamatan<<endl;
	cout<<left<<setw(20)<<"agama"<<": "<<ktp.agama<<endl;
	cout<<left<<setw(20)<<"status perkawinan"<<": "<<ktp.status_perkawinan<<endl;
	cout<<left<<setw(20)<<"pekerjaan"<<": "<<ktp.pekerjaan<<endl;
	cout<<left<<setw(20)<<"kewarganegaraan"<<": "<<ktp.kewarganegaraan<<endl;
	cout<<left<<setw(20)<<"berlaku hingga"<<": "<<ktp.berlaku_hingga<<endl;
	cout<<"=================================================\n";
}

int main(){
	KTP ktp; //menggunakan tipe data KTP yang telah dibuat dengan struct tadi dan memngisi tipe data tersebut dengan variable ktp
	
	cout<<"input data KTP\n";
	inputKTP(ktp); // pemanggilllan fungsi inputktp
	
	displayKTP(ktp); // pemanggilan fungsi displayktp
}
