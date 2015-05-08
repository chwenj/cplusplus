class Sale_item {

    public:
        //ops on the Sale_item obj.

        //default constructor needed to initialize members of built-in type
        Sale_item(): unit_sold(0), revenue(0.0) {}

    private:
        std::string isbn;
        unsigned units_sold;
        double revenue;

};



