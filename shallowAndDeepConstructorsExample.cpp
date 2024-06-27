#include<iostream>
#include<string.h>

class PrepInsta{

    int* ptr;

    public:
    PrepInsta(){

    }

    PrepInsta(int x){
        ptr = new int;
        *ptr = x;
    }
    //creating user defined copy constructor
    PrepInsta(const PrepInsta &obj1){
        ptr = new int;
        *ptr = *obj1.ptr;
    }

    void multiply(int num2){
        *ptr = *ptr * num2; 

    }

    void print(){
        std::cout << *ptr << std::endl;
    }

    ~PrepInsta(){
        delete ptr;
    }


};

int main(){

    PrepInsta obj1(10);
    PrepInsta obj2 = obj1;

    std::cout << "Before multiplication" << std::endl;
    obj1.print();
    obj2.print();

    obj1.multiply(30);

    std::cout << "After multiplication" << std::endl;

    obj1.print();
    obj2.print();
    return 0;
}