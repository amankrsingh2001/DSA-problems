#include<iostream>
using namespace std;


//function overloading



class Add {
    public:
    int x;
    int y;
    Add(int _x, int _y){
        this->x = _x;
        this->y = _y;
    }

    Add operator+(const Add &src){
        this->x += src.x;
        this->y += src.y;
    }
       
    void display(){
        cout<<"x"<<x<<" "<<"y"<<y;
    }
};

int main(){
    Add A1(5, 6);
    Add A2(7, 8);
    Add A3(2, 4);
    (A1+A2)+A3;
    A1.display();
    return 0;
}