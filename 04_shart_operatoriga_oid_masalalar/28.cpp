// Sana: 2023.01.17
// Muallif: Zakariyo Pulatov
// Maqsad: Yil berilgan. Berilgan yilda nechta kun borligini aniqlovchi Pr tuzilsin. Kabisa yilida 366 kun bor, kabisa bo'lmagan yilda 365 kun bor.
//  kabisa yili deb 4 ga karrali yillarga aytiladi. Lekin 100 ga karrali yillar ichida faqat 400 ga karrali bo'lganlari kabisa yili deyiladi.
//  masalan 300, 1300, 1900 kabisa yili emas. 1200, 2000 kabisa yili
#include <iostream>

using namespace std;

int main() {

    int n=96;

    if (((n%4)==0) && (n%400)==0) {
        cout << 366 << " kun bor\n";

    }else {
        cout << 365 << " kun bor\n";
    }
    return 0;
}