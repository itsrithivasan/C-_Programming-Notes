#include"iostream"

class shape{

    protected:
    int length, breadth;

    // with in the class all three public, private, protected

    public:

    //setters
    void setlength(int len){
        length = len; 
    }

    void setbreadth(int bre){
        breadth = bre;
    }
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

    //protected members are not accessible outside the class
    rect1.setlength(10);
    rect1.setbreadth(20);

    // public members are accessible outside the class
    std::cout << "The area is " << rect1.area() << std::endl;
    return 0;
}