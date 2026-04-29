#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majEle(vector<int> nums){
    int n = nums.size();
    int fre = 1;
    int ans = nums[0];

    sort(nums.begin(), nums.end());
    for(int i = 1; i<n; i++){
        if(nums[i] == nums[i-1]){
            fre++;
        }else{
            fre = 1;
            ans = nums[i];
        }
        if(fre > n/2){
            return ans;
        }
    }
    
}
int main(){
    int n = 3;
    int nums[] = {3,2,3};

    cout<<"the majority element: "<<majEle<<endl;
    return 0;
}