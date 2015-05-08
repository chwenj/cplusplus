
class Query {
    friend class NameQuery;

    public:
        // ...

    protected:
        Query();
        //
        set<short> *_solution;
        vector<location> _loc;
        //...
    private:
        explicit Query(const vector<location>&);
};

inline Query:Query(): _solution(0) 
{

}

inline Query:Query(const vector<location> &loc)
    : _solution(0), _loc(loc)
{

}

class NameQuery : public Query {
pulic:
    explicit NameQuery(const string&);
    NameQuery(const string&, vector<location>*);
    //...
protected:
    //...

};

inline NameQuery::NameQuery(const string &name)
    : _name(name)
{

}



