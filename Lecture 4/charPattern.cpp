#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 0; i<=n-1; i++){
        char ch = 'A';
        for(int j = 0; j<=n-1; j++){
            cout<<ch<<" ";
            ch++;
        } 
        cout<<endl;
    }
    return 0;
}