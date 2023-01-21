// Sana: 2023.01.18
// Muallif: Zakariyo Pulatov(
// Maqsad: O'yin kartas turlari berilgan 1-g'isht, 2-olma, 3-chillak, 4-qarg'a. 10 kartasidan katta kartalar quyidagi qiymatlarni o'zlashtirgan: 11-valet, 12-dama, 13-qirol, 14-tuz. Ikkita butun son berilgan n karta qiymati (6<=n<=14), m karta turi (1<=m<=4) kiritilganda karta nomlarini (masalan 6 qarg'a)chiqarib beruvci Pr tuzing
#include <iostream>

using namespace std;

int main() {

    int n=2, m=11;

    

    switch (m) {

    case 1 : cout << "gisht\n"; break;
    case 2 : cout << "olma\n"; break;
    case 3 : cout << "chillak\n"; break;
    case 4 : cout << "qarg'a"; break;
    case 11 : cout << "valet\n"; break;
    case 12 : cout << "dama\n"; break;
    case 13 : cout << "qirol\n"; break;
    case 14: cout << "tuz\n"; break;

    default:
        break;
    }
}