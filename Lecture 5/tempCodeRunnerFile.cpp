#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i<n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    int n;
    cout<<"enter n: ";
    cin>>n;

    cout<<"prime number are: ";
    for(int i = 2; i<=n; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}