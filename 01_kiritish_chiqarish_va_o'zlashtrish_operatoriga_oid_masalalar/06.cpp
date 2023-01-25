// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Paralelepepidning tomonlari a, b, c berilgan. Uning hajmi V = a * b * c va to'la srti S = 2*(a*b + b*c + a*c) aniqlansin
#include <iostream>

using namespace std;

void V_1();
void V_2(int a, int b, int c);
void S_1();
void S_2(int a, int b, int c);

int main()
{
    V_1();
    V_2(1, 2, 3);
    S_1();
    S_2(1, 2, 3);


    return 0;
}
void V_1() {

    int a = 1, b = 2, c = 3;

    cout << " V_1 = " << a * b * c << endl;
}
void V_2(int a, int b, int c) {

    cout << " V_2 = " << a * b * c << endl;
}
void S_1() {

    int a = 1, b = 2, c = 3;

    cout << " S_1 = " << a * b * c << endl;
}
void S_2(int a, int b, int c) {

    cout << " S_2 = " << a * b * c << endl;
}