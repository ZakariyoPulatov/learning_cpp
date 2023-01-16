// Sana: 2023.01.16
// Muallif: Zakariyo Pulatov
// Maqsad: Uchta butun son berilgan. Shu sonlarni ikkitasi o'zaro teng, qolgan bittasini tartib raqami aniqlansin
#include <iostream>

using namespace std;

int main() {

    int a=6, b=6, c=1;

    if ((a==b) && (c>0)) {
        cout << " c = " << c << "-" << endl;

    }else if ((a==c) && (b>0)) {
        cout << " b = " << b << "-" << endl;

    }else if ((b==c) && (a>0)) {
        cout << " a = " << a << "-" << endl;
    
    }
    return 0;
}