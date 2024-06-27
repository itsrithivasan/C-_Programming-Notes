#include"iostream"
#include<string.h>

class PrepInsta{
    
    char* prepString;

    public:
    PrepInsta(){

    }

    PrepInsta(const char* str){
        prepString = new char[16];
        strcpy(prepString, str);
    }

    // creating user defined copy constructor
    PrepInsta(const PrepInsta &Obj1){
        prepString = new char[16];
        strcpy(prepString, Obj1.prepString);
    }

    ~PrepInsta(){
        delete [] prepString;
    }

    void print(){
        std::cout<< prepString << std::endl;
    }

    void concatenate(const char* str){
        strcat(prepString, str);
    }
};

int main(){

    PrepInsta obj1("prep");

    //copy constructor called (default, created by C++ compiler)
    PrepInsta obj2 = obj1;
    
    std::cout << "Before concatenation" << std::endl;

    obj1.print();
    obj2.print();
    
    obj1.concatenate(" Insta");
    obj2.concatenate(" Instantly");

    std::cout << "After concatenation" << std::endl;

    obj1.print();
    obj2.print();

    return 0;

    /*The output will not same for obj1 and obj2, because in this program 
    user defined copy constructor is created, so the Deep constructor is happens
    by creating a user defined copy constructor.*/
}