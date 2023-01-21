// Sana: 2023.01.17
// Muallif: Zakariyo Pulatov
// Maqsad: Og'irlik birliklari quyidagi tartibda  berilgan. 1-kilogramm, 2-milligram, 3-gramm, 4-tonnna, 5-sentner. O'g'irlik birligi bildiruvchi son berilgan.
//          va shu birlikdagi og'irlik qiymati berilgan. Og'irlikni kilagramda ifodalovchi Pr tuzilsin
#include <iostream>

using namespace std;

int main() {

    int n=5;

    switch (n) {
        
    case 1 : cout << "1 kilogramm = " << "1 kilogram\n"; break;
    case 2 : cout << "1 milligram = " << "0.000001 kilogram\n"; break;
    case 3 : cout << "1 gramm = " << "0.001 kilogram\n"; break;
    case 4 : cout << "1 tonna = " << "1000 kilogram\n"; break;
    case 5 : cout << "1 sentner= " << "100 kilogram\n"; break;
    
    default: cout << " xato raqam!\n"; break;
    }
    return0;
}