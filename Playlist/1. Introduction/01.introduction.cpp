#include<bits/stdc++.h>
using namespace std;

void print(int cnt) {
    if (cnt == 4) {
        return;
    }
    cout << cnt << endl;
    cnt++;
    print(cnt);
}

int main(){
    print(1);
    return 0;
}