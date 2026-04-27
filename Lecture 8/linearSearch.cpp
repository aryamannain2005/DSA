#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i = 0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}


int main(){
    int arr[] = {2,4,5,7,9,6};
    int size = 6;
    int target = 5;
    cout <<"Index is: "<< linearSearch(arr, size, target)<<endl;
    return 0;
}