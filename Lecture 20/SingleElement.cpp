#include<iostream>
#include<vector>
using namespace std;

int SingleElement(vector<int>& A){
    int st = 1;
    int end = A.size()-1;

    while(st<=end){
        int mid = st+(end-st)/2;
        if(A[mid] != A[mid-1] && A[mid] != A[mid+1]){
            return mid;
        }
        if(mid%2 == 0){
            if(A[mid]== mid-1){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }else{
            if(A[mid] == mid+1){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> A = {1,1,2,2,3,4,4,5,5};
    cout<<"the single Element is: "<<SingleElement(A)<<endl;
    return 0;

}