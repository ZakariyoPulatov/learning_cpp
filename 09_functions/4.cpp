#include <iostream>

using namespace std;

int bolish(int a, int b) {

    return a / b;
}

int main() {

    int a = 6, b = 3;

    int n = bolish(a, b);

    cout << n << endl;
}