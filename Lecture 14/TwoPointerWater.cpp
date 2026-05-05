#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height, int n){
    int lp = 0;
    int rp = n-1;
    int ans = 0;
    int maxWater = 0;
    while(lp<rp){
        int w = rp-lp;
        int ht = min(height[lp], height[rp]);
        int currWater = w * ht;
        maxWater = max(maxWater, currWater);

        if(height[lp] < height[rp]){
            lp++;
        }else{
            rp--;
        }
    }
    return maxWater;
}
int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<<"maxArea: "<<maxArea(height, height.size())<<endl;
    return 0;
}