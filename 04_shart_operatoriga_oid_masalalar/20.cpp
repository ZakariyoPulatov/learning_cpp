// Sana: 2023.01.16
// Muallif: Zakariyo Pulatov
// Maqsad: Sonlar o'qida uchta a, b, c nuqtalar berilgan. a nuqtaga eng yaqin nuqta va ular orasidagi masofa aniqlansin
#include <iostream>
#include <cmath>


using namespace std;

int main() {

    int a=1, b=-5, c=-4;

    if (abs(a-b) < abs(a-c)){
        cout << b << endl;
    } else {
        cout << c << endl;
    }
}