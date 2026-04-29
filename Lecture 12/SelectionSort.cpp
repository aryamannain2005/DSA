#include<iostream>
using namespace std;
int main(){
    int n = 5;

    for(int i = 0; i<n-1; i++){
        int minIdx = i;
        for(int j = i+1; j<n; j++){
            minIdx = j; 
        }
    }
    swap(arr[i], arr[minIdx]);
    return 0;
}