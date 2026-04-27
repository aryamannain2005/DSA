#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int oddSum = 0;
//     for(int i = 1; i<=n; i++){
//         if(i %2 != 0){
//             oddSum += i;
//         }
//     }
//     cout<< "oddSum: " << oddSum<<endl;
//     return 0;
// }
//while loop
int main(){
    
    int n;
    cin>>n;
    int i = 1;
    int oddSum = 0;
    while(i<=n){
        if(i%2 != 0){
            oddSum += i;
        }
        i++;
    }
    cout<< "OddSum: "<<oddSum<<endl;
    return 0;
}