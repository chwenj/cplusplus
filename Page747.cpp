
class BinaryQuery: public Query{
pulic:
    const Query *lop() {
        return _lop;
    }
    const Query *rop() {
        return _rop;
    }

protected:
    BinaryQuery(Query *lop, Query *rop)
        : _lop(lop), _rop(rop) {
        
    }

    Query *_lop;
    Query *_rop;

}

inline Query:~Query() 
{
    delete _solution;
}

inline NotQuery::~NotQuery()
{
    delete _op;
}

inline OrQuery::~OrQuery()
{

}






