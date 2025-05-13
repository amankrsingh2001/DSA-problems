#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    for (int i = 0; i < 5; i++) {
        char ch;
        cin >> ch;
        str.push_back(ch); 
    }
    cout<<str<<endl;
}