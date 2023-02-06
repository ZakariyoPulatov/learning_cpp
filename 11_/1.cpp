#include <iostream>

using namespace std;

int main() {
    string a[64] = { "true" };
    
   

    for (string i : a) {
        cout << i << ", ";
    }

    cout << sizeof(a[0]) << endl;
    cout << endl;

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        cout << (a + i) << ", ";
    }

    cout << endl;

    return 0;
}