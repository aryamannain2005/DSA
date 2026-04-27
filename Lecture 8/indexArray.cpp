#include<iostream>
using namespace std;
int main(){
    int nums[] = {4, 15, 22, -22, 20};
    int size = 5;

    int maxIndex = 0;
    for(int i = 0; i<=size; i++){
        if(nums[i] > maxIndex){
            maxIndex = i;
            
        }
    }
    cout<<"largest element: "<< nums[maxIndex]<<endl;
    cout<<"Index: "<< maxIndex;
    return 0;
}