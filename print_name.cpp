#include<iostream>
using namespace std;

void printName(int i, int n){
    if(i>n) return;
    cout<<"Rafy\n";
    printName(i+1,n);
}

int main(){
    int n, i=1,c=0; cin>>n;
    printName(i,n);
    return 0;
}