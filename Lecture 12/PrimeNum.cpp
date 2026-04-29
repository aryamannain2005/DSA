//time complexity for this loop
#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i=2; i*i<n; i++){
        if(n % i == 0){
            cout<<"Non prime";
            break;
        }
    }
}
