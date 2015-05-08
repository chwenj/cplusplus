
#include <iostream>
#include <math>

class Point {
    public:
        Point(double i, double j):x(i), y(j) {
        }

        void print() const {
            cout << "(" << x << "," << y << ")";
        }

    private:
        double x;
        double y;

};

class Figure {
    public:
        Figure(double i=0, double j=0): center(i, j) {
        }

        Point& location() {
            return center;
        }

        void move(Point p) {
            center = p;
            draw();
        }

        virtual void draw() = 0;
        virtual void rotate(double) = 0;

    private:
        Point center;

};

class Circle: public Figure {
    public:
        Circle(doule i=0, double j=0, double r=0): Fugure(i, j), radius(r) {
        }
    
        void draw(double) {
            cout << "a circle with center";
            location().print();
            cout << "and radius" << radius << endl;
        }

        void rotate(double) {
            cout << "no effect"
        }

    private:
        double radius;

};

class Square: public Figure {
    public:
        Square(double i=0, double j=0, double d=0, double a=0): Fugure(i, j), side(d), angle(a) {};

        void draw() {
            cout << "A square with center";
            location().print();
            cout << "side length" << side << endl;

        }

        void rotate(double a) {
            angle += a;
            cout << "" << endl;
        
        }

        void vertices() {
            cout << "" ;
        }

}



