// Sana: 2023.01.16
// Muallif: Zakariyo Pulatov
// Maqsad: Tortta butun son berilgan. Shu sonlarni uchtasi o'zaro teng, qolgan bittasini tartib raqami aniqlansin
#include <iostream>

using namespace std;

int main() {

    int a=1, b=3, c=3, g=3;

    if ((a==b) && (a==c) && (g>0)) {
        cout << " g = " << g << "-" << endl;

    }else if ((a==b) && (a==g) && (c>0)) {
        cout << " c = " << c << "-" << endl;

    }else if ((a==c) && (a==g) && (b>0)) {
         cout << " b = " << b << "-" << endl;
       
    }else if ((b==c) && (c==g) && (a>0)) {
            cout << " a = " << a << "-" << endl;

    }
    return 0;
}