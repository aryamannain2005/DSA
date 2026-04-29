#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();

    int i = 0; int j = n-1;

    while(i<j){
        int pairSum = nums[i]+ nums[j];
        if(pairSum < target){
            j--;
        }else if(pairSum > target){
            i++;
        }
        else{
            return (i,j);
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {2,7,11,15};
    int target = 13;

    cout<<"Ans: " << pairSum<<endl;
    return 0;
}