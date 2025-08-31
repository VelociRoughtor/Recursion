// Print linearly from 1 to N

#include<bits/stdc++.h>
using namespace std;

void printName(int cnt, int N){
    if (cnt == N) {
        return;
    }
    cout << cnt << endl;
    printName(cnt + 1, N);
}

int main(){
    int N; 
    cin >> N;
    int cnt = 1;
    printName(cnt, N);
    
    return 0;
}