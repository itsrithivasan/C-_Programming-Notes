#include"iostream"

class Prepinsta{

    private:
    int x, y;

    public:
    Prepinsta(){
        std::cout << "Default constructor is called" << std::endl;
    }
    Prepinsta(int x1, int y1){
        x = x1;
        y = y1;

        std::cout << "The parameterized constructor called " << x << " & " << y << std::endl;
    }

    //copy constructor
    Prepinsta(const Prepinsta &p1){
        x = p1.x;
        y = p1.y;   

        std::cout << "The Copy constructor was called " << x << " & " << y << std::endl;     
    }

    int getx(){
        return x;
    }

    int gety(){
        return y;
    }
};

int main(){

    Prepinsta p1(10, 20);
    Prepinsta p2(p1);
    Prepinsta p3 = p1;

    Prepinsta p4;

    // assignment alone happening like x = y.
    // all the values of p1 object is converted to p2 object
    p4 = p1;

    std::cout << "p1.x = " << p1.getx() << ", p1.y = " << p1.gety() << std::endl;
    std::cout << "p2.x = " << p2.getx() << ", p2.y = " << p2.gety() << std::endl;
    std::cout << "p3.x = " << p3.getx() << ", p3.y = " << p3.gety() << std::endl;
    std::cout << "p4.x = " << p4.getx() << ", p4.y = " << p4.gety() << std::endl;
    
    return 0;
}