// Sana: 2023.01.18
// Muallif: Zakariyo Pulatov
// Maqsad: Teng yonli uchburchakning elementlari quyidagi tartibda nomerlangan. 1-katet a, 2-gipatenuza c = a*sqrt(2), 3-gipetenuzaga tushirilgan balandlik h = c/2, 4-yuzasi s = c*h/2, Shu elementlardan bittasi berilganda qoganlarini topuvchi Pr tuzilsin
#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int a=10, n , c, h;

    cout << " tartib raqamni kiriting = "; cin >> n;
    c=a*sqrt(2), h=c/2;
    switch (n)
    {
    case 1 : cout << " kateti = " << a << ", ga teng\n"; break;
    case 2 : cout << " gipatenuzasi = " << (a * sqrt(2)) << ", ga teng\n"; break;
    case 3 : cout << " gipetenuzaga tushirilgan balandlik = " << (c / 2) << ", ga teng\n"; break;
    case 4 : cout << " yuzasi = " << (c * h/2) << ", ga teng\n"; break;
    
    default: cout << " uchburchakning bunday elementi uo'q\n"; break;

    }
    return 0;
}