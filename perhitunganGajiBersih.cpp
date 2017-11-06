#include <iostream>
using namespace std;

int main(){ 
	float jk, le, gtot, gp, gb,ul, jam,pa;
	cout<<""<<endl;
	cout<<"Lama Kerja: "; cin>> jk;
	cout<<"Gaji Perjam: "; cin>>gp;

if (jk>40){
	system("cls");
	cout<<""<<endl;
	le=jk-40;
	jam=le*1.5;
	ul=gp*jam;
	pa=ul*0.15;
	gtot=gp-pa;
	gb=gtot-(jk*40)+((gp-40)*jk*1.5);
	
		cout<<"Lama Kerja Karyawan : "<<jk<<" Jam"<<endl;
		cout<<"Total Lembur : "<<le<<endl;
		cout<<"Gaji Perjam Karyawan :"<<gp<<endl;
		cout<<"Upah Lembur Diterima Karyawan :"<<ul<<endl;
		cout<<"Pajak Yang Ditanggung Karyawan :"<<pa<<endl;
		cout<<"Total Gaji Bersih Yang Diterima Karyawan :"<<gb<<endl;

}

	else {
		system,("cls");
		gtot=gp*40;
		pa=gtot*0.15;
		gb=gtot-pa;
		
		cout<<"Lama Kerja Karyawan Dalam Seminggu : "<<jk<<endl;
		cout<<"Total Lembur Karyawan : "<<le<<endl;
		cout<<"Gaji Perjam Yang Karyawan Terima : "<<gp<<endl;
		cout<<"Upah Lembur Yang Diterima Karyawan : "<<ul<<endl;
		cout<<"Pajak Yang Ditanggung Karyawan : "<<pa<<endl;
		cout<<"Total Gaji Bersih Yang Diterima Karyawan : "<<gb<<endl;
		
	}
}
