#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n, vector<int> &v) {
    if (v[n] != -1) {
        return v[n];
    }

    if (n <= 1) {
        return n;
    }

    return v[n] = fibonacci(n - 1, v) + fibonacci(n - 2, v);
}

int main(){
    int n; 
    cin >> n;
    vector<int> v(n + 1, -1);
    cout << fibonacci(n, v) << endl;

    return 0;
}

/*
    We used Dynamic Programming because, normal recursion would have exponential time complexity O(2^n).

    DP approach has O(n) complexity.
*/