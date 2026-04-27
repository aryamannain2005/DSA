#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;

//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=n; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//using i from 0.
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 0; i<=n-1; i++){
        for(int j = 0; j<=n-1; j++){
            cout<< "*" << " ";
        }
        cout<<endl;
    }
    return 0;
}