// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Uch xonli son berilgan. umlani rostlikka teksiring: " Ushbu sonlaring barcha raqamalari xar xil"
#include <iostream>

using namespace std;

int main() {

    int a=5, b=9, c=3;
    bool natija;
    
    cout << " natija = " << ((a!=b) && (b!=c) && (a!=c) && (a!=b)) << endl;

    return 0;
}