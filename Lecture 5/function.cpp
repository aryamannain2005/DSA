#include<iostream>
using namespace std;

int minValue(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int main(){
    cout<<"min: " <<minValue(5,7)<<endl;
    return 0;
}