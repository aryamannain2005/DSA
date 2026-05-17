#include<iostream>
#include<vector>
using namespace std;

int SingleElement(vector<int>& A){
    int n = A.size();
    int st = 1;
    int end = n-2;

    while(st<=end){
        int mid = st+(end-st)/2;
        if(mid == 0 && A[0] != A[1]) return A[mid];
        if(mid == n-1 && A[n-1] != A[n-2]) return A[mid];

        if(A[mid] != A[mid-1] && A[mid] != A[mid+1]){
            return A[mid];
        }
        if(mid%2 == 0){
            if(A[mid-1] == A[mid]){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }else{
            if(A[mid-1] == A[mid]){
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