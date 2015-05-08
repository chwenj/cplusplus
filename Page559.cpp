class Screen {
    public:
        Screen& move(index r, index c);
        Screen& set(char);
        Screen& set(index, index, char);

    // ...

};

inline Screen& Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen& Screen::move(index r, index c)
{
    index row = r * width;
    cursor = row + c;
    return *this;
}

