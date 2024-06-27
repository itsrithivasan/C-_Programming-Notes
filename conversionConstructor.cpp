#include "iostream"

class Prepinsta{

    int x, y;

    public:

    void display(){
        std::cout << "The values are: " << x << " & " << y << std::endl;
    }
    //At time of parameterized constructor definition, I am initializing one of the values.
    //Second parameter should be initialized
    Prepinsta(int a, int b = 0){
        x = a;
        y = b;
    }
};

int main(){

    //Basic Parameterised constructor with one parameter passed
    Prepinsta myObj(10, 20);
    myObj.display();

    //Implicit calling using assignment operator
    //conversion Constructor
    myObj = 100;
    myObj.display();

    myObj = {1000, 2000};
    myObj.display();

    return 0;
}