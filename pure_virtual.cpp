#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Rectangle is only an "interface" and
// cannot have an object of its own
class Rectangle
{
protected:                              // if priivate, the child class cannot acccess these variables
    float width_ = 0;
    float height_ = 0;
    float area_ = 0;
public:
    Rectangle(float w, float h) : width_{w}, height_{h}, area_{w*h} {}
    virtual void Func1() const = 0;
    virtual void Func2() const = 0;
};
  
class Square : public Rectangle
{
public:
    Square(float side) : Rectangle(side, side) {}

    // Square needs to implement both the functions mandatorily
    // as both of Rectangles functions are purely virtual.
    void Func1() const override {
        cout << "Implementation of the virtual function 1" << endl;
        cout << "Sides: " << width_ << ", " << height_ << endl;
    }

    void Func2() const override {
        cout << "Implementation of the virtual function 2" << endl;
        cout << "Area: " << area_ << endl;
    }
};


int main()
{   
    // cannot create object of Rectangle as it has pure virtual functions.
    // Rectangle is an abstract class and child needs to implement the funcs
    // Rectangle obj1(4, 5);            // error: cannot declare variable ‘obj1’ to be of abstract type ‘Rectangle’
    Square sq_obj1(5);
    sq_obj1.Func1();
    cout << endl;
    return 0;
}