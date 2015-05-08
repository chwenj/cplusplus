
class Sale_item {
    public:
        //default argument for book is the empty string
        explicit Sale_item(const std::string &book = ""):
            isbn(book), units_sold(0), revenue(0.0) {}
        explicit Sale_item(std::istream &is);

        //as before

};
