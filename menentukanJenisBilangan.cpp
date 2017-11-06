#include<iostream>
using namespace std;

int main(){
	int f;
	cout<<"PROGRAM MENENTUKAN JENIS BILANGAN"<<endl;
	cout<<""<<endl;
	cout<<"Input Bilangan : ";cin>>f;
	cout<<""<<endl;
	if (f < 0)
	{
		cout<<"inputan yang anda pilih adalah bilangan negatif"<<endl;
	}
	
	else if (f>0)
	{
		cout<<"inputan yang anda pilih adalah bilangan positif"<<endl;
	}
	else if (f==0)
	
		cout<<"inputan yang anda pilih adalah bilangan nol "<<endl;

	return 0;
}
