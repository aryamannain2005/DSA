#include<iostream>
using namespace std;

int sumOfDigit(int n){
    int Sum = 0;

    while(n > 0){
        int lastDigit = n % 10;
        n /= 10;

        Sum += lastDigit;
    }
    return Sum;
}



int main(){
    cout<<"Sum: " <<sumOfDigit(2356)<<endl;
    return 0;
}