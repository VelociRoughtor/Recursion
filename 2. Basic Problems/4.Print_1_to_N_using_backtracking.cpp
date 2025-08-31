// Print from 1 to N using Backtracking

#include<bits/stdc++.h>
using namespace std;

void printName(int N){
    if (N < 1) {
        return;
    }
    printName(N - 1);
    cout << N << endl;
}

int main(){
    int N; 
    cin >> N;
    printName(N);
    
    return 0;
}