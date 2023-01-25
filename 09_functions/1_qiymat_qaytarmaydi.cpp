#include <iostream>

using namespace std;


void hello();
void say(string word);
void add(int x, int y);

int main() {

    hello();
    say("salom");
    add(5, 7);
    return 0; 
}

// qiymat qaytarmaydi, argument qabul qilmaydi
void hello() {
    cout << "hello, world\n";
}

// qiymat qaytarmaydi, argument qabul qiladi
void say(string word) {
    cout << word << endl;
}

void add(int x, int y) {
    cout << x + y << endl;
}








// f() = 0
// f(x) = x + 1
// f(x, y) = (x + 1) * y
