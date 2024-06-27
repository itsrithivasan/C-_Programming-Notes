#include "iostream"
 
class Rectangle{

    public:
    int length;
    int breadth;
};

int main()
{
    Rectangle rectObj;

    rectObj.length = 10;
    rectObj.breadth = 20;
    
    std::cout << "The length is: " << rectObj.length << std::endl;
    std::cout << "The breadth is " << rectObj.breadth << std::endl;
    std::cout << "The area of Rectangle is : " << rectObj.length * rectObj.breadth << std::endl;
    return 0;
}

