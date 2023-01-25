#include <iostream>

using namespace std;

int qosh(int a, int b) {

    return a + b;
}

int main() {
    int a=1, b=2;

    int n = qosh(a, b);

    cout << n << endl;

    return 0;
}

