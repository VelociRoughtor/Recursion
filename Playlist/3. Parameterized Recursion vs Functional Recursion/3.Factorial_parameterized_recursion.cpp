// Find factorial of N using parameterized recursion

#include<bits/stdc++.h>
using namespace std;

int factorial(int i, int fact) {
    if (i == 0) {
        return fact;
    }
    return factorial(i - 1, fact * i);
}

int main(){
    int n; 
    cin >> n;
    int fact = 1;
    cout << factorial(n, fact) << endl;

    return 0;
}