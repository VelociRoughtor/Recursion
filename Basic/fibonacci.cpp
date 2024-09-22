#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacci(int n) {
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";  
    }
    cout << endl;
}

int main() {
    int n; cin >> n;
    printFibonacci(n);  
    return 0;
}
