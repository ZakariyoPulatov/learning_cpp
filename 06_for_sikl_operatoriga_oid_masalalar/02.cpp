// Sana: 2023.01.20
// Muallif: Zakariyo Pulatov
// Maqsad: a va b butun sonlar berilgan (a<b). a va b sonlar orasidagi barcha butun sonlarni (a va b ni ham ) chiqaruvchi va chiqarilgan sonlar sonini chiqaruvchi Pr tuzilsin
#include <iostream>

using namespace std;

int main() {

    int a = 97, b = 100;
    int counter = 0;

    for ( int i = a; i < b; i++) {
        counter++;
        cout << i << endl;   
    }
    
    cout << counter << " ta\n";

    return 0;
}