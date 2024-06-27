#include"iostream"

class pokemon{

    private:
    int weight, height, type;

    public:

    // we forced the compiler, do not to do static resolution/ force late binding in runtime polymorphism 
    virtual void attack(){
        std::cout << "Pokemon has attacked " << std::endl;
    }
    // static resolution/early binding in compile time polymorphism
    void defend(){
        std::cout << "Pokemon has defended " << std::endl;
    }
};
// child class
class pikachu : public pokemon{

    public:
    void attack(){
        std::cout << "Pikachu has given thunderbolt " << std::endl;
    }

    void defend(){
        std::cout << "Pikachu has ran" << std::endl;
    }
};

int main(){

    // child class object gives priority to its function
   
    pikachu p1;
    p1.attack();
    p1.defend();

    std::cout << " ********The below output is by pointer******** " << std::endl;

    // parent class object get priority to its function
    // because it uses address. 
    // the compiler class chooses base class.    
    pokemon* pokePtr;
    pikachu Pikachu;
    pokePtr = &Pikachu;

    pokePtr->attack();
    pokePtr->defend();
    return 0;
}