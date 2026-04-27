#include<iostream>
using namespace std;

bool isPrime(int n){
    while(n>0){
        if(n % 2 == 0){
            return false;
        }
        else{
            return true;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"isPrime: "<<isPrime(n)<<endl;
    return 0;
}