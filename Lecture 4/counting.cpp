#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int num = 1;

    for(int i = 0; i<=n-1; i++){
        for(int j = 0; j<=n-1; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}