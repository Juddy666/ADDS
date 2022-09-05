#include <iostream>
#include <string>

using namespace std;

class A{
    protected:
        int _s;
    public: 
        A(int s){
            _s = s;
        }
        A(){
            _s = -1;
        }

        virtual void print(){
            cout << "S = " << this->_s << endl;
        }
};

class B: public A{
    private:
        double _k;
    public:
        B(int s,double k):A(s),_k(k){}
        B():B(0,0){}
        void print(){
            cout << "S =" << this->_s << " K = " << this->_k << endl;
        }
};

void test(A* a){
    a->print();
}

int main(){

    A a1(564);

    B b1(500,0.34567);

    test(&a1);
    test(&b1);
    return 0;
}