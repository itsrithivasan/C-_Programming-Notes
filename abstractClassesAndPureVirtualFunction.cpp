#include<iostream>

class Pokemon{
    int height, weigth;
    char type[20];  
    public:
    virtual void attack() = 0;
};

class pikachu : public Pokemon{

    public:
    void attack(){
        std::cout << "Thunderbolt" << std::endl;
    }
};

int main(){

    // Pokemon pokemon;
    Pokemon *pokeptr;
    pikachu p1;
    pokeptr = &p1;

    pokeptr -> attack();
    p1.attack();

    return 0;
}