#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    vector<string>chars = {"a","a","b","b","c","c","c"};
    int Count = 1;
    string str = chars[0];
    vector<string>val;
    for(int idx = 1;idx<chars.size();idx++){
        
        if(chars[idx] == str){
            Count++;
        }else{ 
            cout<<Count<<endl;
            str = chars[idx];
            Count = 1;
        }
        
    }
    return 0;
}