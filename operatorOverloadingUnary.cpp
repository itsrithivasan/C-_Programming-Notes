#include"iostream"

class Complex{
    int real, imag;

    public:

    void print(){
        if(imag < 0)
        std::cout << real << " " << imag << "j" << std::endl;

        else
        std::cout << real << " + " << imag << "j" << std::endl;

    }

    void getData(){
        std::cin >> real >> imag;
    }

    //unary operator overloading
    void operator ++(){
        ++real;
        ++imag;

    }

    void operator ++(int /*dummy parameter is passed*/){
        real++;
        imag++;
    }
};

int main(){

    Complex p1;
    p1.getData();

    std::cout << "Values before operator overloading" << std::endl;
    p1.print();
    
    //unary operator overloading

    // pre-increment
    ++p1;

    std::cout << "Values after pre-increment unary operator overloading" << std::endl;
    p1.print();

    // post-increment
    p1++;

    std::cout << "Values after post-increment unary operator overloading" << std::endl;
    p1.print();
    
    return 0;
}