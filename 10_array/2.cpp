#include <bits/stdc++.h>

using namespace std;

int main () {
    int n = 5, index = 0;
    int numbers[n/2 + 1];

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << "index: " << index << "; yozilgan qiymat: " << i << endl;
            numbers[index] = i;
            index++;
        }
    }

    for (int i = 0; i < index; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}