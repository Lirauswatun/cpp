#include<iostream>
using namespace std;
int main(){
	//Deklarasi variabel
	float nilai,uts,uas,quiz,tugas,project,rata_rata;
	cout<<"program menghitung  nilai akhir siswa"<<endl;
	cout<<"------------------------------------"<<endl;
	
	//project input
	cout<<"masukkan nilai uts : ";
	cin>>uts;
	cout<<"masukkan nilai uas : ";
	cin>>uas;
	cout<<"masukkan nilai quiz : ";
	cin>>quiz;
	cout<<"masukkan nilai project : ";
	cin>>project;
	
	//Hitung sesuai rumus
	
	rata_rata=(uts+uas+quiz+project)/5;
	cout<<"nilai rata_rata="<<rata_rata<<endl;
	
	if(rata_rata>=91){
		cout<<"nilai A+"<<endl;
	}
		else if(rata_rata>=81){
			cout<<"nilai A"<<endl;
		}
		else if(rata_rata>=71){
			cout<<"nilai B+"<<endl;
		}
		else if(rata_rata>=51){
			cout<<"nilai B"<<endl;
		}
		else if(rata_rata>=41){
			cout<<"nilai C"<<endl;
		}
		else if(rata_rata>=31){
			cout<<"nilai D"<<endl;
		}
		else if(rata_rata>=0){
			cout<<"nilai E"<<endl;
		}
	
}
