// Print from N to 1 using Backtracking

#include<bits/stdc++.h>
using namespace std;

void printName(int cnt, int N){
    if (cnt > N) {
        return;
    }
    printName(cnt + 1, N);
    cout << cnt << endl;
}

int main(){
    int N; 
    cin >> N;
    int cnt = 1;
    printName(cnt, N);
    
    return 0;
}