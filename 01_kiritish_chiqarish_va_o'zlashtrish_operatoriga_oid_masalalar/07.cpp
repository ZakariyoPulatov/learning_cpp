// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Doiraning radiusi R berilgan. Uning uzunligi L va S yuzasi aniqlansin. L = 2 * 3.14 * R, S = 3.14 * R.
#include <iostream>
#include <math.h>

using namespace std;

void L_1();
void L_2(int r);
void S_1();
void S_2(int r);

int main()
{
    L_1();
    L_2(10);
    S_1();
    S_2(10);

    return 0;
}
void L_1() {

    int r = 10;

    cout << " L_1 = " << 2 * 3.14 * r << endl;
}
void L_2(int r) {

    cout << " L_2 = " << 2 * 3.14 * r << endl;
}
void S_1() {

    int r = 10;

    cout << " S_1 = " << 3.14 * r << endl;
}
void S_2(int r) {

    cout << " S_2 = " << 3.14 * r << endl;
}