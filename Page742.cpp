
#include <iostream>

using namespace std;

class NameQuery: public Query {
pulic:
    //

protected:
    bool _present;
    string _name;

};

NameQuery nq;

inline NameQuery::NameQuery() 
{
    _present = false;   
}

inline NameQuery::NameQuery()
    : _name(name), _present(false)
{

}

inline NameQuery::NameQuery( const string &name,
        vecotr<location> *ploc )
    : _name(name), Query(*ploc), _present(true)
{

}











