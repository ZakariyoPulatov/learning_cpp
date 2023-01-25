// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Kvadratning tomoni a berilgan. Uning yuzasi aniqlansin. S = a*a
#include <iostream>

using namespace std;

void S_1 ();
void S (int a);

int main() {

    int a = 4;

    S (a);
    S_1 ();
    return 0;
}

void S (int a) {

    cout << " S = " << a * a << endl;
}

void S_1 () {

    int a = 4;

    cout << " S = " << a * a << endl;
}