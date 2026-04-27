#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(25);
    vec.push_back(30);
    vec.push_back(45);
    cout<<vec.size()<<endl;

    vec.pop_back();
    cout<<"Size after pop: "<<vec.size()<<endl;
    return 0;
}