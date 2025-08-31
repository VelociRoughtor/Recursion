// Find the sum of 1 to N using parameterized recursion

#include<bits/stdc++.h>
using namespace std;

int findSum(int i, int sum) {
    if (i == 0) {
        return sum;
    }
    return findSum(i - 1, sum + i);
}

int main(){
    int n; 
    cin >> n;
    int sum = 0;
    cout << findSum(n, sum) << endl;

    return 0;
}