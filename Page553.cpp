class Screen {
    public:
        typedef std::string::size_type index;

        char get() const 
            { return contents[cursor]; }
        char get(index ht, index wd) const;

    private:
        std::string contents;
        index cursor;
        index height, width;

};

class Screen myscreen;
char ch = myscreen.get();
ch = myscreen.get(0, 0);


