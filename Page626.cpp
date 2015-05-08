
class Screen {

public:
    void *operator new(size_t );
    void operator delete(void *);
    //...

};

Screen *ps = new Screen;
