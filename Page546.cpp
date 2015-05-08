#include <iostream>

using namespace std;

double avg_price() const
{
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;

}

class Sales_item {
    public:
        //
        double avg_price() const;
        bool same_isbn() const;
        bool same_isbn(const Sales_item &rhs) const
            { return isbn == rhs.isbn; }

        //default constructor needed to initialize members of built-in type 
        Sales_item(): units_sole(0), revenue(0.0) 
            {;}

    private:
        string isbn;
        unsigned units_sold;
        double revenue;

};

/*
int main(int argc, char **argv)
{



    return 0;
}
*/
