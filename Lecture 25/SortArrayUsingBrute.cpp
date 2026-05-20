#include<iostream>
#include<vector>
using namespace std;

void SortColors(vector<int>& nums){
    int n = nums.size();
    int count0 = 0, count1 = 0, count2 = 0;

    for(int i = 0; i<n; i++){
        if(nums[i] == 0){
            count0++;
        }else if(nums[i] == 1){
            count1++;
        }else{
            count2++;
        }
    }

    int idx = 0;
    for(int i = 0; i < count0; i++){
        nums[idx++] = 0;
    }

    for(int i = 0; i < count1; i++){
        nums[idx++] = 1;
    }

    for(int i = 0; i < count2; i++){
        nums[idx++] = 2;
    }
}
int main(){
    vector<int> nums1 = {2, 0, 2, 1, 1, 0};
    cout << "Original array: ";
    for(int num : nums1){
        cout << num << " ";
    }
    cout << endl;
    
    SortColors(nums1);
    cout << "Sorted array: ";
    for(int num : nums1){
        cout << num << " ";
    }
    cout << endl;
    
    vector<int> nums2 = {2, 0, 1};
    cout << "\nOriginal array: ";
    for(int num : nums2){
        cout << num << " ";
    }
    cout << endl;
    
    SortColors(nums2);
    cout << "Sorted array: ";
    for(int num : nums2){
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}