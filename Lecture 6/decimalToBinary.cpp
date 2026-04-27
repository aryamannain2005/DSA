#include<iostream>
using namespace std;

int decimalBinary(int decNum){
    int ans = 0;
    int pow = 1;

    while( decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}


int main(){
    int decNum = 50;
    for(int i = 1; i<=10; i++){
        cout<<decimalBinary(i)<<endl;
    }
}