#include <iostream>

using namespace std;

class Point{
    private: 
        int _x;
        int _y;
    public:
        Point(){
            _x = 0;
            _y = 0;
        }
        void print(){
            cout << _x << " , " << _y << endl;
        } 

        void set_point(int x, int y){
            _x = x;
            _y = y;
        }
};

void foo(Point pnt){
    pnt.set_point(500,500);
    pnt.print();
}

int main(){

    Point p1;
    p1.set_point(10,10);

    foo(p1);
    p1.print();
    return 0; 
}