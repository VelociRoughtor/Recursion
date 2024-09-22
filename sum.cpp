#include<iostream>
using namespace std;

// functional way
int sum1(int n){
    if(n<=0) return 0;
    return n+sum1(n-1);
}

// parameter way
int sum(int n, int s){
    if(n<=0) return s;
    return sum(n-1, s+n);
}

int main(){
    int n; cin>>n;
    cout<<sum(n,0)<<endl;
    cout<<sum1(n)<<endl;
    return 0;
}

