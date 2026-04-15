#include<iostream>
using namespace std;

int binTodec(int binNum){
    int ans = 0;
    int pow = 1;

    while(binNum > 0){
        int rem = binNum % 10;
        ans += rem*pow;
        binNum /= 10;
        pow *= 2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the binary number: ";
    cin>>n;
    cout<<"The decimal number is: "<< binTodec(n) <<endl;
    return 0;
}