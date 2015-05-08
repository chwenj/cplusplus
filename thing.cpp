
#include <iostream>

using namespace std;

class Thing {
    public:
        virtual void EchoMe() {
            cout << "Echo myself" << endl;
        }

        ~BaseThing() {
            cout << "BaseThing destructor" << endl;
        }

};

class Animal: public Thing {
    public:
        virtual void EchoMe() {
            cout << "echo myself" << endl;
        }


};
