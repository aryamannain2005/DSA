#include<iostream>
#include<vector>
using namespace std;

int PeakIndex(vector<int>& A){
    int st = 0;
    int end = A.size()-1;

    while(st<=end){
        int mid = st+(end-st)/2;
        if(A[mid-1] < A[mid] && A[mid] > A[mid+1]){
            return mid;
        }else if(A[mid -1] < A[mid]){
            st = mid+1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
    vector<int> A = {0,2,3,0};
    cout<<"the peak index is: "<<PeakIndex(A)<<endl;
    return 0;
}