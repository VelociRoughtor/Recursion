/*
    Given a list of N integers, print sums of all subsets in it. Output should be printed in increasing order of sums.
*/

#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> v;
multiset<int> st;
void subsetSum(int i, int sum){
    if (i == n) {
        st.insert(sum);
        return;
    }
    subsetSum(i + 1, sum + v[i]);
    subsetSum(i + 1, sum);
}

int main(){
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    subsetSum(0, 0);

    for (auto it = st.begin(); it != st.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}