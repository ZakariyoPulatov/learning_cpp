//Sana; 2022.20.12
//Muallif; Zakariyo Pulatov
//Maqsad; Ikki xonali son berilgan. Oldin uning o'nliklar xonasidagi, keyin birlar xonasidagi raqamni chaqiruvchi PR tuzilsin
# include <iostream>
# include <math.h>

using namespace std;

int main ()
{   
    int ab, a; 
    
    cout <<"ab= "; cin >> ab;
    cout <<"a= "; cin >> a;

    cout <<"ab= " << "o'nlar xonasidagi butun raqam= " << ab / 10 << endl;
    cout <<"ab= " << "birlar xoansidagi raqam= " << ab % 10<< endl;
    
    return 0;
}
