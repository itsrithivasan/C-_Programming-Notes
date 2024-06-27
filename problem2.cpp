#include"iostream"

class parent{

    private:
    int var1 = 10;

    protected:
    int var2 = 20;

    public:
    int var3 = 30;


    //getters
    int getvar1(){
        return var1;
    }    
};

class child : public parent{
    
    //setters
    public:

    int getvar2(){
        return var2;
    }
};


int main(){

    child c;

    std::cout << " Private value = " << "Private member cannot be accessed" << std::endl;
    std::cout << " Protected value = " << c.getvar2() << std::endl;
    std::cout << " Public value = " << c.var3 << std::endl;
    return 0;
}