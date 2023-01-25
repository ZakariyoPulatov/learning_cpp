// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad:To'g'ri to'rtburchakning tomonlari a va b berilgan. Uning yuzsi S = a * b; va P = 2(a+b) peremetri aniqlansin
#include <iostream>

using namespace std;

void s_1();
void s_2(int a, int b);

int main() {

    s_1();
    s_2(2, 3);

    return 0;
}

void s_1() {

    int a = 2, b = 3;

    cout << " s = " << a * b << endl;
}

void s_2(int a, int b) {

    cout << "s = " << a * b << endl;

}