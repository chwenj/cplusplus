
class Screen {

    //Window_Mgr members can access private parts of class Screen
    friend class Window_Mgr;

    // ...

};

Window_Mgr&
Window_Mgr::relocate(Screen::index r, Screen::index c, Screen& s)
{

    //it's ok to refer to height and width
    s.height += r;
    s.width += c;

    return *this;
}

