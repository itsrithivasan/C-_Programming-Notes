#include"iostream"

class A{

    // if we didn't mention the access specifier 
    // it automatically takes the default one which is 
    // private
    int i;

    public:
        // default constructor
        A();

    int getI(){
        return i;
    }
};

int main(){

    std::cout << "Before the constructor called" << std::endl;

    // memory is created
    A a_obj;

    std::cout << "After the constructor called" << std::endl;

    std::cout << a_obj.getI() << std::endl;
    return 0;
}


A :: A(){
            i = 1;
            std::cout << "The constructor was called " << std::endl;
        }
