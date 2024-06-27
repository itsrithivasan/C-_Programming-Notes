#include"iostream"

class A{

    // if we didn't mention the access specifier 
    // it automatically takes the default one which is 
    // private
    int i;

    public:
        // default constructor
        A();
        ~A();

    int getI(){
        return i;
    }
};

int main(){

    std::cout << "1. Before the constructor called" << std::endl;

    // memory is created
    A a_obj;

    int x = 1;
    std::cout << " The second object is going to be called " << std::endl;
    if(x){
        A b_obj;
    }

    std::cout << "3. After the constructor called" << std::endl;

    return 0;
}


A :: A(){
            std::cout << "2. The constructor was called " << std::endl;
        }

A :: ~A(){
            std::cout << "4. The destructor was called " << std::endl;
        }