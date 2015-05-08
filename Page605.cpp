
#include <iostream>

class String;
istream& operator >> (istream &, String &);
ostream& operator << (ostream &, const String &);

class String {
    public:
        //
        String (const char * = 0);
        String (const String &);

        //
        ~String();

        //
        String& operator = (const String &);
        String& operator = (const char *);

        //
        char& operator[](int) const;

        //
        bool operator == (const char *) const;
        bool operator == (const String &) const;

        //
        int size() {return _size;}
        char * c_str() { return _string; }

    private:
        int _size;
        char *_string;


};

int main() 
{
    String name1 = "sherlock";
    String name2 = "heros";

    name1 += " ";
    name1 += name2;

    if ( !(name1 == "shell hero") )
        cout << "concatenation did not work."

    return 0;
}
