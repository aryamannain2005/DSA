#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;

    vec.push_back(25);
    vec.push_back(30);
    vec.push_back(45);
    cout<<vec.size()<<endl;

    cout<<"Number at i: "<<vec.at(2)<<endl;

    return 0;
}