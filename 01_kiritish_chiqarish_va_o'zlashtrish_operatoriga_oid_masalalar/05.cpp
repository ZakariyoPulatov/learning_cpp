// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Kubning tomoni a berilgan. Uning hajmi V = a*a*a va to'la sirti S = 6 * a*a aniqlansin.
#include <iostream>

using namespace std;

void V_1();
void V_2(int a);
void S_1();
void S_2(int a);

int main()
{
    V_1();
    V_2(10);
    S_1();
    S_2(10);

    return 0;
}
void V_1() {

    int a = 10;

    cout << " V = " << a * a * a << endl;   
}
void V_2(int a) {
    
    cout << " V = " << a * a * a << endl;
}
void S_1() {

    int a = 10;

    cout << " S = " << a * a * a << endl;   
}
void S_2(int a) {
    
    cout << " S = " << a * a * a << endl;
}
