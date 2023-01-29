#include <iostream>

using namespace std;


int add(int x, int y);

int main() {

    cout << add(5, 7) << endl;

    return 0;
}

// qiymat qaytaradi, argument qabul qiladi
int add(int x, int y) {
    return x + y;
}