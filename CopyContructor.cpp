#include<iostream>
#include<string>
using namespace std;

// class Student{
//     public:
//     string name;
//     string gmail;

//     Student(){
//         cout<<"Default Ctor Called"<<endl;
//     }

//     Student(string _name, string str){
//         this->name = _name;
//         gmail = str;
//     }
//     Student(string _name){
//         cout<<"Paramaterized const called"<<endl;
//         this->name = _name;
//     }

//     Student(const Student &s){
//         this->name = s.name;
//     }

//     void printName(){
//         cout<<this->name<<endl;
//     }

//     void printName(string _name){
//         cout<<this->name<<endl;
//     }

//     ~Student(){
//         cout<<"Student destructor called"<<endl;
//     }
// };


// class Aman :public Student{


// };


class Human{
    public:
     void canWalk(){
        cout<<"Walking"<<endl;
    }

};
//virtual Resolution
class Teacher:virtual public Human{

};
class Researcher:virtual public Human{

};

class Professor :public Teacher, public Researcher{

};

int main(){
    Professor s1;
    s1.canWalk();
    // s1.Teacher::canWalk(); // Scope Resolution
    return 0;
}