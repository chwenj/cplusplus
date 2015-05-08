
class Query {
public:
    virtual osteam& print(ostream& = cout) const;

};

NameQuery nq("lilacs");

void print(Query obj, const Query *pointer, const Query &ref)
{
    pointer->print();
    ref.print();
    pointer->print();

    obj.print();

}
