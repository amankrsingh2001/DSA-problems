#include<iostream>
using namespace std;

// class Parent{
//     public:
//     int x;
//     Parent(int _x){
//         this->x = _x;
//     }
//     void printNumber(){
//         cout<<this->x<<" "<<(&x)<<endl;
//     }
// };

// class Student:public Parent{
//     public:
//     int val;
//     int x;
//     Student(int _x, int _val):Parent{_x}{
//         this->val = _val;
//         this->x = _val;
//     }
//     void printx() {
//         cout<<this<<endl;
//         Parent& p = *this;
//         cout << p.x << endl;
//     }
// };

int add(int a , int b , int c){
    return a+b+c;
}

int add(int a, int b){
    return a-b;
}

int main(){
    cout<< add(2,3)<<endl;
    cout<< add(2,3,5)<<endl;

}