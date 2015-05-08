
class Screen {
    public:
        //I/F

    private:
        mutable size_t access_ctr;
        // ...

};

void Screen::do_display(std::ostream& os) const
{
    ++access_ctr;
    os << contents;

}

