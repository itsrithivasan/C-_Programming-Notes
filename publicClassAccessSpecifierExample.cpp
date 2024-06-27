#include"iostream"

class shape{

    public:
    int length, breadth;

    // with in the class all three public, private, protected
};

class Rectangle : public shape{

    //public members are inherited from parent to child class
    // public : int length, breadth;
    public:
    int area(){
        return length * breadth;
    }
};


int main(){

    Rectangle rect1;

    //public members are accessible outside the class
    rect1.length = 10;
    rect1.breadth = 20;

    // public members are accessible outside the class
    std::cout << "The area is " << rect1.area() << std::endl;
    return 0;
}