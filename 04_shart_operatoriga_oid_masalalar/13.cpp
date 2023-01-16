// Sana: 2023.01.16
// Muallif: Zakariyo Pulatov
// Maqsad: Uchta son berilgan. Shu sonlarni o'rtachasi (ya'ni katta va kichik sonlar orasidagi son ) ni aniqlovchi Pr tuzilsin
#include <iostream>

using namespace std;

int main() {

    int a=4, b=3, c=5;

    if ((a>b) && (b<c)) {
        cout << " a soni " << b << " dan katta " << c << " dan kichik!\n";
    
    }if ((a<b) && (b<c)) {
        cout << " b soni " << a << " dan katta " << c << " dan kichik!\n";
    
    }if ((a<c) && (b>c)) {
        cout << " c soni " << a << " dan katta " << b << " dan kichik!\n";
    }
    return 0;
}