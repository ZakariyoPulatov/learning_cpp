// Sana: 2023.01.15
// Muallif: Zakariyo Pulatov
// Maqsad: Ikkita butun sonlar berilgan. Shu sonlarning kichiginng tartib raqamini aniqlovchi Pr tuzilsin
#include <iostream>

using namespace std;

int main() {

    int a=4, b=6;

    if (a != b){
        if (a<b) {
            cout << a << "-\n";

        }else {
            cout << b << "-\n";
            
        }
    } else {
        cout << "kiritilgan sonlar teng!\n";
    }

    return 0;
}