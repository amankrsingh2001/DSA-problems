#include<iostream>
#include<vector>
#include<string>

using namespace std;

void rotate(string str2, string &temp, int rotate, int n){
    int i = 0;
    
    while(i < n ){
        temp[i] = str2[(i+rotate)%n];
        i++;
    }
    
    for(auto it:temp){
        cout<<it<<endl;
    }

}


int main(){

    string str1 = "kllkl";
    string str2 = "kllkl";
    if(str1 == str2) {
        cout<<"Valid rotation"<<endl;
        return 1;
    };
    int n = str1.size();
    string temp = str2;
    int rotation = 1;
    while(rotation<n){
        rotate(str2, temp, rotation, n);

        if(temp == str1){
            cout<<"Valid rotation"<<endl;
            return 0;
        }
        temp = str2;
        rotation++;
    }
    cout<<"Invalid rotation"<<endl;
   return 0;

}