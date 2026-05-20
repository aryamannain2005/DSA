#include<iostream>
#include<vector>
using namespace std;

void SortColors(vector<int>& arr){
    int n = arr.size();
    int mid = 0;
    int low = 0;
    int high = n-1;

    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }

}
int main(){
    vector<int> arr = {2,0,2,1,1,0};
    
    cout << "Original array: ";
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
    
    SortColors(arr);
    
    cout << "Sorted array: ";
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}