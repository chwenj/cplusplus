
bool operator==( const String &str1, const String &str2)
{
    if ( str1.size() != str2.size() )
        return false;

    return strcmp( str1.c_str(), str2.c_str() )? false : true;
}

bool String::operator == (const String &rhs) const
{
    if (_size != rhs.)
        return false;
    return 

}

