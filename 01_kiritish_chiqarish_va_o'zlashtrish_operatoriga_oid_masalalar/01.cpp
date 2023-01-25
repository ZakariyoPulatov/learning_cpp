// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Kvadratning tomoni a berilgan. Uning peremetri aniqlansin. P = 4 * a.
#include <iostream>

using namespace std;

void P_1();
void P_2(int a);

int main() {
    P_1();
    P_2(2);
    return 0;
}

void P_1() {
    int a = 5;

    cout << " P = " << 4 * a << endl;
}

void P_2(int a) {
    cout << " P = " << 4 * a << endl;
}