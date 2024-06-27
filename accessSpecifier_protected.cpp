#include<iostream>

//parent Class - base Class - Super Class
class Parent{

    public:
    int var1;

    private:
    int var2;

    protected:
    int var3;

    // all the three things are accessible
};

//Child class - derived class - Sub class
class child : public Parent{

    public:

    // setters
    void setnumber(int n){
        var3 = n;
    }


    // getters
    int getnumber(){
        return var3;
    }
};

int main(){

    child i;
    i.setnumber(20);
    std::cout << i.getnumber() << std::endl;


    return 0;
}