#include<iostream>
using namespace std;
int main(){
    int age;
    cout<< "Enter age: ";
    cin>>age;
    if(age>=18){
        cout<<"you can vote"<<endl;
    }else{
        cout<<"you can't vote"<<endl;
    }
    return 0;
} 