class Screen {
    public:
        void *operator new(size_t );
        void operator delete(void *, size_t );

        //...

    private:
        Screen *next;
        static Screen *freeStore;
        static const int screenChuck;

};

Screen *Screen::freeStore = 0;
const int Screen::screenChuck = 24;

void *Screen::operator new(size_t size)
{
    Screen *p;
    if ( !freeStore ) {
        size_t ch
    
    }
}
