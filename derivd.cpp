
#include <iostream>

using namespace std;

class BaseClass {
    public:
        //constructor:
        BaseClass(){
        }
        BaseClass(int i) : b_number(i) {
        }

        int get_number() {
            return b_number;
        }
        void print() {
            cout << "b_number = " << b_number << endl;
        }

    private:
        int b_number;

};

class DerivedClass : public BaseClass {
    
    public:
        DerivedClass(int i, int j): BaseClass(i), d_number(j) {
        }

        void print() {
            cout << get_number() << "";//get_number fn from BaseClass
            cout << d_number << endl;
        }

    private:
        int d_number;

};


int main()
{
    cout << "main fn: " << endl;

    BaseClass a(2);
    DerivedClass b(3, 4);

    a.print();
    b.print();
    /*
    cout << "; ";
    cout << "base part of b is ";
    b.BaseClass::print();
    */

    return 0;
}
