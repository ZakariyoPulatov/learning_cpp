// Sana: 2023.01.16
// Muallif: Zakariyo Pulatov
// Maqsad: a va b haqiqiy sonlari berilgan. Shu sonlarni shunday o'zlashtrish kerakki, a soni kichik, b son katta bo'lsin.
//          a va b ning qiymati ekranga chiqarilsin.
#include <iostream>

using namespace std;

int main() {

    int a=28, b=6;
    if (a<b) {
        cout << " kichigi = " << a << endl;
        cout << " kattasi = " << b << endl;
        return 0;
    }

    cout << " kichigi = " << b << endl;
    cout << " kattasi = " << a << endl;
    
    return 0;
}