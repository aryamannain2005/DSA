#include<iostream>
using namespace std;

int SumofArray(int arr[], int size){
    int sum = 0;
    for(int i = 0; i<=size-1; i++){
        sum += arr[i];
    }
    return sum;
}
int ProductofArray(int arr[], int size){
    int product = 1;
    for(int i = 1; i<size; i++){
        product *= arr[i];
    }
    return product;
}

int main(){
    int arr[] = {1,2,4,6,8,9};
    int size = 6;
    cout<<"The sum of array: "<<SumofArray(arr, size) <<endl;
    cout<<"The Product of array: "<<ProductofArray(arr, size) <<endl; 
    return 0;
}