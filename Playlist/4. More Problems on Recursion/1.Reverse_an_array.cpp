// Parameterized

#include<bits/stdc++.h>
using namespace std;

void reverse(int l, int r, vector<int> &v){
    if (l >= r) {
        return;
    }
    swap(v[l], v[r]);
    reverse(l + 1, r - 1, v);
}

int main(){
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    reverse(0, n - 1, v);

    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }

    return 0;
}

/*
    9
    1 2 3 4 5 6 7 8 9 10
*/