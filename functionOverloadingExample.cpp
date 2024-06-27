#include"iostream"

class Prepinsta {

    int x, y, w;
    double p, q;
    char c;

    public:

    void sum(int a, int b){
        x = a;
        y = b;
        std::cout << "The int sum is: " << x+y << std::endl;
    }

    void sum(int a, int b, int c){
        x = a;
        y = b;
        w = c;
        std::cout << "The int sum is: " << x+y+w << std::endl;
    }

    void sum(double a, double b){
        x = a;
        y = b;
        std::cout << "The double sum is: " << x+y << std::endl;
    }
};

int main(){
    Prepinsta myObj;
    myObj.sum(10, 20);
    myObj.sum(10, 20, 30);
    myObj.sum(100.00, 200.00);

}