#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int count = 2; count<=n; count++){
        cout<< (count * 2)<<endl;
    }
    return 0;
}