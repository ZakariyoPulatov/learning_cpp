// Sana: 2023.01.15
// Muallif: Zakariyo Pulatov
// Maqsad: Uchta butun son berilgan. Shu sonlar orasidan nechta musbat va manfiy son borligini aniqlovchi Pr tuzilsin
#include <iostream>

using namespace std;

int main() {
    
    int a=0, b=4, c=-6;
    int count1=0, count2=0;

    if (a>0) {
        count1++;
    } else if (a<0){
        count2++;
    }

    if (b>0) {
        count1++;
    } else if (b<0) {
        count2++;
    }

    if (c>0) {
        count1++;
    } else if (c<0) {
        count2++;
    }
    
    cout << " musbat sonlar " << count1 << " ta bor \n";
    cout << " manfiy sonlar " << count2 << " ta bor \n";

    return 0;
}