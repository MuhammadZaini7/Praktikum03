#include <iostream>

using namespace std;

int main() 
{
   float a;
    int sb;
    
    cout << "Silahkan masukkan tinggi badan(cm) : "; cin >>sb;
    cout << "Silahkan masukkan berat badan(kg) : " ;
    cin >> a;
    
    if (a<sb/2.5)
       cout << "  Anda Mengalami : Underweight(kekurangan berat badan)" << endl;
            else if (sb/2.3 < a)
                 cout << "  Anda Mengalami : Overweight(kelebihan berat badan)" << endl;
            else if (sb/2.5 <= a <= sb/2.3)
           		 cout << "  congratulation!!! : Normal" << endl;
                 
                 
                 return 0;
    }
