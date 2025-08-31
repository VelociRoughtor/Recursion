#include<bits/stdc++.h>
using namespace std;

string name = "Md. Mehedi Hasan Rafy";

void printName(int cnt){
    if (cnt == 5) {
        return;
    }
    cout << name << endl;
    printName(cnt + 1);
}

int main(){
    int cnt = 0;
    printName(cnt);
    
    return 0;
}