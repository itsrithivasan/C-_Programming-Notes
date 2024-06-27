#include<iostream>

class Prepinsta{
    int x,y;
    char c;
    double z;
    
    public:
    void print(){
        std::cout << "Nothing to print no arguments passed here " << std::endl;
    }

    void print(int a){
        x = a;
        std::cout << "The value to be printed: " << x << std::endl;
    }

    void print(double a){
        z = a;
        std::cout << "The value to be printed: " << z << std::endl;
    
    }

    void print(int a, int b){
        x = a;
        y = b;
        std::cout << "The value to be printed: " << x << " & " << y << std::endl;
    
    }

    void print(char l){
        c = l;
        std::cout << "The value to be printed: " << c << std::endl;
    
    }
};

int main(){

    Prepinsta myObj;
    myObj.print();
    myObj.print(10);
    myObj.print(10.00);
    myObj.print(10, 20);
    myObj.print('P');


    return 0;
}