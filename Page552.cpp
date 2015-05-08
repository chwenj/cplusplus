class Screen {
    public:
        //IF set;
        
    private:
        std::string contents;
        std::string::size_type cursor;
        std::string::size_type height, width;
};

class Screen {
    public:
        //IF set;
    typedef std::string::size_type index; 

    private:
        std::string contents;
        index cursor;
        index height, width;
};
