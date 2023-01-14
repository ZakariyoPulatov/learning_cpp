// Sana: 2023.01.14
// Muallif: Zakariyo Pulatov
// Maqsad: x, y sonlar berilgan. Jumlani rostlikka tekshiring: " kordinatalari (x,y) bo'lgan nuqta, kordinata choraging 2-sida  yoki 3-sida yotadi"
#include <iostream>

using namespace std;

int main()
{
    int x, y;
    bool natija;

    cout << " x = "; cin >> x;
    cout << " y = "; cin >> y;

    cout << " natija = " << (((x<0) && (y>0)) || ((x>0) && (y<0))) << endl;

    return 0; 
}