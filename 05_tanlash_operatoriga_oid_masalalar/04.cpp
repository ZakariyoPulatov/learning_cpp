// Sana: 2023.01.17
// Muallif: Zakariyo Pulatov
// Maqsad: Oy raqami berilgan. Shu oyda necha kun borligini aniqlovchi Pr tuzilsin
#include <iostream>

using namespace std;

int main() {

    int n=13;

    switch (n) {
        
        case 1 : cout << " 1 yanvar oyida 31 kun bor\n"; break;
        case 2 : cout << " 2 fevral oyida 28 kun bor\n"; break;
        case 3 : cout << " 3 mart oyida 31 kun bor\n"; break;
        case 4 : cout << " 4 aprel oyida 30 kun bor\n"; break;
        case 5 : cout << " 5 may oyida 31 kun bor\n"; break;
        case 6 : cout << " 6 iyun oyida 30 kun bor\n"; break;
        case 7 : cout << " 7 iyul oyida 31 kun bor\n"; break;
        case 8 : cout << " 8 avgust oyida 31 kun bor\n"; break;
        case 9 : cout << " 9 sentabr oyida 30 kun bor\n"; break;
        case 10 : cout << " 10 oktyabr oyida 31 kun bor\n"; break;
        case 11 : cout << " 11 noyabr oyida 30 kun bor\n"; break;
        case 12 : cout << " 12 dekabr oyida 31 kun bor\n"; break;
    
    default: cout << " bunday oy yo'q \n"; break;
    }
    return 0;
}