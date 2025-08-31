// Print linearly from N to 1

#include<bits/stdc++.h>
using namespace std;

void printName(int N){
    if (N < 1) {
        return;
    }
    cout << N << endl;
    printName(N - 1);
}

int main(){
    int N; 
    cin >> N;
    printName(N);
    
    return 0;
}