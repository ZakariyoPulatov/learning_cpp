// Sana: 2023.01.16
// Muallif: Zakariyo Pulatov
// Maqsad: Uchta son berilgan. Shu sonlarni yig'indisi eng katta bo'ladigan ikkitasini ekranga chiqaradigan avval kichigini keyin kattasini  Pr tuzilsin
#include <iostream>

using namespace std;

int main() {

    int a=10, b=81, c=9;

    if ((a>b) && (a>c)) {

        if (b > c) {
            cout << a << " va " << b << endl; 
        } else {
            cout << a << " va " << c << endl; 
        }

    } else if ((b>a) && (b>c)) {

        if (a > c) {
            cout << b << " va " << a << endl;
        } else {
            cout << b << " va " << c << endl; 
        }

    } else  {
          
        if (a > b) {
            cout << c << " va " << a << endl;
        } else {
            cout << c << " va " << b << endl;
        }
    } 
    
    return 0;
}