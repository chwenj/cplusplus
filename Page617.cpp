
class String {
    public:
        //
        String& operator = ( const char * );
        //...
    
    private:
        int _size;
        char *_string;

};

String& String::operator = ( const char *sobj )
{
    //sobj
    if ( !sobj ) {
        _size = 0;
        delete[] _string;
        _string = 0;
    }
    else {
        _size = strlen(sobj);
        delete[] _string;
        _string = new char[_size + 1];
        strcpy(_string, sobj);
    }
    return *this;

}
