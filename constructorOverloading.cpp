#include"iostream"
class Demo{
    public:
    Demo(){
        std::cout << "obj1 called values are Null" << std::endl;
    }

    Demo(int a){
        std::cout << "obj2 called values are (5)" << std::endl;
    }

    Demo(int a, int b){
        std::cout << "obj3 called values are (10,100)" << std::endl;
    }
};

int main(){

    Demo obj1;
    Demo obj2(5);
    Demo obj3(10,100);

    return 0;
}