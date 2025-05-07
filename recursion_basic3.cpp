#include <iostream>
using namespace std;

void printEven(int n) {
    if (n < 2) return;           // Base case: stop when n is less than 2
    if (n % 2 == 0)              // If n is even, print it
        cout << n << " ";
    printEven(n - 1);            // Recursive call with n-1
}

int main() {
    int N;
    cout << "Enter a number N: ";
    cin >> N;
    printEven(N);
    return 0;
}
