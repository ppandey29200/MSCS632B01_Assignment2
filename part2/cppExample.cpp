#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(42);  // Allocate memory
    cout << *ptr << endl;
    delete ptr;  // Free memory
    return 0;
}
