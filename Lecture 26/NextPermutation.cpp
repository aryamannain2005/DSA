#include<iostream>
#include<vector>
using namespace std;

void nextPermutation(vector<int>& A) {
    int pivot = -1;
    int n = A.size();
    for(int i=n-2; i>=0; i--){
        if(A[i] < A[i+1]){
            pivot = i;
            break;
        }
    }
    if(pivot == -1){
        reverse(A.begin(), A.end());
        return;
    }

    for(int i=n-1; i>=0; i--){
        if(A[i] > A[pivot]){
            swap(A[i],A[pivot]);
            break;
        }
    }

    int i = pivot+1;
    int j = n-1;

    while(i<=j){
        swap(A[i], A[j]);
        i++;
        j--;
    }
}

int main(){
    vector<int> A = {1, 2, 3};
    cout << "Original: ";
    for(int x : A) cout << x << " ";
    cout << endl;
    
    nextPermutation(A);
    cout << "Next Permutation: ";
    for(int x : A) cout << x << " ";
    cout << endl;
    
    return 0;
}