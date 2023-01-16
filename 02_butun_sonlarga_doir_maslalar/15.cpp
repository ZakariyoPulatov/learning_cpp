//Sana: 2022.12.21
//Muallif: Zakariyo Pulatov
//Maqsad: Uch xonali son berilgan. Uning o'nliklar xonasidagiraqam bilan yuzliklar xonasidagi 
//raqamni almashtirishdan hosil bo'lgan sonni aniqlovchi Pr tuzilsin (kirish=123; natija=213)
#include <iostream>

using namespace std;

int main() {
    
    int kirish = 123;

    cout << kirish << " natija = " << (kirish/100*10) + (kirish%100/10*100) + (kirish%10) << endl;
    
    return 0;
}