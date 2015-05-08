
class BinaryQuery : public Query {
    public:
        BinaryQuery(Query *lop, Query *rop, string oper)
            : _lop(lop), _rop(rop), _oper(oper) {
            
            }
        ~BinaryQuery() {
            delete _lop;
            delete _rop;
        }
        //pure virtual function
        ostream &print(ostream& = cout) const = 0;

    protected:
        Query *_lop;
        Query *_rop;
        string _oper;

};

inline ostream& BinaryQuery::print(ostream &os) const
{
   // 
}
