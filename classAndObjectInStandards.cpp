#include "iostream"
 
class Rectangle{

    private:
    int length;
    int breadth;

    public:
    void setLength(int len){
        length = len;
    }

    void setBreadth(int bre){
        breadth = bre;
    }

    int area(){
        return length * breadth;
    }
};

int main()
{
    Rectangle rectObj;

    rectObj.setLength(10);
    rectObj.setBreadth(20);
    
    // std::cout << "The length is: " << rectObj.length << std::endl;
    // std::cout << "The breadth is " << rectObj.breadth << std::endl;
    std::cout << "The area of Rectangle is : " << rectObj.area() << std::endl;
    return 0;
}

