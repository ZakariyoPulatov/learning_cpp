// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Aylananing diametri berilgan. Uning uzunligi aniqlansin. L = 3.14 * d.
#include <iostream>

using namespace std;

void L_1();
void L_2(int d);

int main() { 

    L_1();
    L_2(10);
    
    return 0;
}
void L_1() {

    int d = 10;

    cout << " l = " << 3.14 * d << endl;
}
void L_2(int d) {

    cout << " l = " << 3.14 * d << endl;

}