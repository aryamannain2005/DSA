#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nain;
    nain.push_back(25);
    nain.push_back(30);
    nain.push_back(45);
    nain.push_back(5);
    nain.push_back(6);

    cout<<"Vector size: "<<nain.size()<<endl;
    cout<<"Vector capicity: "<<nain.capacity();
    return 0;
}