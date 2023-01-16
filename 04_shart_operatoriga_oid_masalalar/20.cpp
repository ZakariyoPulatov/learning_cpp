// Sana: 2023.01.16
// Muallif: Zakariyo Pulatov
// Maqsad: Sonlar o'qida uchta a, b, c nuqtalar berilgan. a nuqtaga eng yaqin nuqta va ular orasidagi masofa aniqlansin
#include <iostream>

using namespace std;

int main() {

    int a=1, b=99, c=100;

    if ((a<b) && (b<c)) {
        cout << "eng yaqini = " << b << ", masofasi = " << b-a << endl;

    }else if ((a>b) && (b<c)) {
        cout << "eng yaqini = " << b << ", masofasi = " << a-b << endl;

    }if ((a<c) && (c<b)) {
        cout << " eng yaqini = " << c << ", masofasi = " << c-a << endl;

    }else if ((a>c) && (c>b)) {
        cout << " eng yaqini = " << c << ", masofasi = " << a-c << endl;
    }
    return 0;
}