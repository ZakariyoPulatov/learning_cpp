// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Nolga teng bolmagan ikkita son berilgan. Ularni yig'indisi, ko'paytmasini va har birining kvadrati aniqlansin.
#include <iostream>
#include <math.h>

using namespace std;

void q_1();
void q_2(int a, int b);
void q_3(int a, int b);

int main() {

    q_1();
    q_2(2, 6);
    q_3(2, 6);

    return 0;
}
void q_1() {

    int a = 2, b = 6;

    cout << " a + b = " << a + b << endl;
}
void q_2(int a, int b) {

    cout << " a + b = " << a * b << endl;
}
void q_3(int a, int b) {

   cout << " a * a = " << a * a << endl; 
   cout << " b * b = " << b * b << endl;
}