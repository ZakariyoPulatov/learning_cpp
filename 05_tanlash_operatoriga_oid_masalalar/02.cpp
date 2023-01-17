// Sana: 2023.01.17
// Muallif: Zakariyo Pulatov
// Maqsad: k butun son berilgan. Baho natijalarini chiqaruvchi Pr tuzilsin. (1-yomon, 2-qoniqarsiz, 3-qoniqarli, 4-yaxshi, 5-a'lo). 
//          agar k soni 1-5 gacha oraliqqa tegishli bo'lmasa "xato" deb chiqarilsin
#include <iostream>

using namespace std;

int main() {

    int k=6;

    switch (k) {
        
    case 1 : cout << "1-yomon!\n"; break;
    case 2 : cout << "2-qoniqarsiz!\n"; break;
    case 3 : cout << "3-qoniqarli!\n"; break;
    case 4 : cout << "4-yaxshi!\n"; break;
    case 5 : cout << "5-a'lo!\n"; break;
    
    default : cout << "xato!\n"; break;
    }
    return 0;
}