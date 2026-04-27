#include<iostream>
using namespace std;

int factOfN(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact *= i;
    }
    return fact;
}


int main(){

    cout<<"Factorial: "<<factOfN(4)<<endl;
    return 0;
}