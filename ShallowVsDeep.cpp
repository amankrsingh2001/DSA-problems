#include<iostream>
using namespace std;

class abc{
    public:
    int x;
    int *y;
    abc(int _x, int _y){
        this->x = _x;
        this->y =new int(_y);
    }
    void print(){
        cout<<this->x<<" "<<this->y<<" "<<*y<<endl;
    }
};

int main(){
    abc a(10, 12);
    a.print();
};