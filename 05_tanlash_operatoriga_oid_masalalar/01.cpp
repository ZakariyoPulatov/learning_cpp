// Sana: 2023.01.17
// Muallif: Zakariyo Pulatov
// Maqsad: 1 dan 7 gacha bo'lgan butun sonlar berilgan. Kiritilgan songa mos ravishda hafta kunlarini so'zda ifodalovchi programma tuzilsin
#include <iostream>

using namespace std;

int main() {

    int n=5;

    switch (n) {
        case 1 : cout << "1-dushanba!\n"; break;
        case 2 : cout << "2-seshanba!\n"; break;
        case 3 : cout << "3-chorshanba!\n"; break;
        case 4 : cout << "4-payshanba!\n"; break;
        case 5 : cout << "5-juma!\n"; break;
        case 6 : cout << "6-shanba!\n"; break;
        case 7 : cout << "7-yakshanba!\n"; break; 

        default : cout << "bunday hafta kuni yo'q!\n"; break;
    }
    return 0;
}