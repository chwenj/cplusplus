
class Screen {
    public:
        Screen& display(std::ostream &os)
            { do_display(os); return *this; }

        const Screen& display() const 
            { do_display(os); return *this; }

    private:
        void do_display(std::ostream &os) const 
            { os << contents; }

};

//
Screen myScreen(5, 3);
const Screen blank(5, 3);

//call non-const version:
myScreen.set('#').display(cout);
//call const version:
blank.display(cout);



