// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: To'g'ri uchburchakning katetlari a va b berilgan. Uning gipatenuzasi c va perimetri p aniqlansin. c = sqrt(a*a + b*b), p = a+b+c.
#include <iostream>
#include <math.h>

using namespace std;

float gipatenuzasi(int a, int b) {

   return sqrt( a * a + b * b );  
}

void peremetri(int a, int b) {

    float c = gipatenuzasi(a, b);

    cout << " p = " << a + b + c << endl; 
}

int main() {

    int a = 4, b = 4;
    void peremetri(a, b);
 
    return 0;
}