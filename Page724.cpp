
void eval( const Query *pquery )
{
    pquery->eval();
}   

int main()
{
    AndQuery aq;
    NotQuery nq;
    OrQuery *Oq = new OrQuery;
    NameQuery nq("Bill");

    //编译器自动转换为基类
    eval(&aq);
    eval(&nq);
    eval(op);
    eval(&nq);

}





