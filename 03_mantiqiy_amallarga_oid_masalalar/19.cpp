// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Jumlani rostlikka tekshiring: " berilgan uchta butun sonlaring hech bo'lmaganida bir jufti o'zaro qarama qarshi"
#include <iostream>

using namespace std;

int main ()
{
    int a = 2, b = -5, c = 8;
    bool natija;

    cout << " natija = " << (((a>0) && (b=-c)) || ((b>0) && (a=-c)) || ((c>0) && (a=-b))) << endl;

    return 0;  
}