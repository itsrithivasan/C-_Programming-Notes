#include"iostream"

class Complex{
    int real, imag;
    public:
    void getData(){
        std::cin >> real >> imag;
    }

    Complex operator +(Complex obj2){
        
        Complex tempResult;
        tempResult.real = real + obj2.real;
        tempResult.imag = imag + obj2.imag;

        return tempResult;
    }

    void display(){
        if(imag < 0)
        std::cout << real << " " << imag << "j" << std::endl;

        else
        std::cout << real << " + " << imag << "j" << std::endl;

    }

};

int main(){

    Complex obj1, obj2, result;

    obj1.getData();
    obj2.getData();

    result = obj1 /*called object*/ + obj2 /*passed object*/;

    result.display();

    return 0;
}