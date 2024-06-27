#include"iostream"

class Demo{

    public:
    int i;
    float f;

    Demo(int val1, float val2){
        i = val1;
        f = val2;
    }
};

int main(){
    
    Demo demo1(1000, 5.00);
    Demo demo2(2000, 6.00);

    std::cout << demo1.i << " & " << demo1.f << std::endl;
    std::cout << demo2.i << " & " << demo2.f << std::endl;
    return 0;
}