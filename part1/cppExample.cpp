#include <iostream>
using namespace std;

int x = 10;  // Global variable

void outer() {
    int y = 20;  // Block-scoped variable
    {
        int z = 30;  // Block-scoped
        cout << x << " " << y << " " << z << endl;
    }
}

int main() {
    outer();
    return 0;
}
