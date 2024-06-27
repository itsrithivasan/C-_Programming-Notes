#include <iostream>
using namespace std;

class parent //parent class
{
    public:
    parent() //constructor
    {
        cout << "Parent class Constructor\n";
    }

    ~parent()//destructor
    {
        cout << "Parent class Destructor\n";
    }
};

class child : public parent//child class
{
    int x, p;

    public:
    
    child(int i, int b) //constructor
    {
    x = i;
    p = b;
    cout << "value of x & p : " << x <<" & " << p << " Child class Constructor\n";
    }

    ~ child() //destructor
    {
    cout << "Child class Destructor\n";
    }
};

class grandChild : public child // grandchild class
{
    int y, q;  

    public:

    //*****************important****************** */

    grandChild(int a, int b):child(a, b) //constructor
    {
        y = a;
        q = b;
    cout << "value of y & q : " << y <<" & " << q << " GrandChild class Constructor\n";
    }

    ~ grandChild() //destructor
    {
    cout << "GrandChild class Destructor\n";
    }

};

int main()
{
    //automatically executes all grandchild, child and parent classes
    //constructors and destructors because of inheritance
    grandChild obj(1000, 100);

    return 0;
}