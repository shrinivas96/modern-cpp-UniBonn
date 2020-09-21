#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Printable 
{
public:
    virtual void Print() const = 0;
};

class Rectangle : public Printable
{
public:
    Rectangle(float w, float h) : width_{w}, height_{h}, area_{w*h} {}
    
    // virtual void Print() const override  {
    //     cout << "Rectangle w sides " << width_ << ", " << height_ << " has area " << area_;
    // }

protected:
    float width_ = 0;
    float height_ = 0;
    float area_ = 0;

};

class Square : public Rectangle
{
public:
    explicit Square(float side) : Rectangle(side, side) {}
    // void Print() const override {
    //     cout << "Square w sides " << width_ << ", " << height_ << " has area " << area_;        
    // }
};


int main()
{
    Printable pr_obj;               // error: cannot declare variable ‘pr_obj’ to be of abstract type ‘Printable’; note: Printable is an "INTERFACE"

    // error if not overriding Print()
    // error: cannot declare variable ‘re_obj’ to be of abstract type ‘Rectangle’
    // note: because Print() has been copied into Rectangle
    Rectangle re_obj(4, 5);
    
    // error if Rectangle::Print() was not declared 
    // error: cannot declare variable ‘sq_obj’ to be of abstract type ‘Square’
    Square sq_obj(5.0);

    sq_obj.Print();

    cout << endl;
    return 0;
}