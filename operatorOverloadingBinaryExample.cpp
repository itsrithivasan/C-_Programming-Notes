#include"iostream"
#include<string.h>

class Complex{
    
    public:
    char string[20];

    Complex operator +(Complex p2){

        Complex tempObj;
        strcat(string, p2.string);
        strcpy(tempObj.string, string);
        return tempObj;
    }

    void display(){
        std::cout << "Result is: " << string << std::endl;
    }


};

int main(){
    Complex p1, p2, result;
    char tempstr[20] = "prep";
    char tempstr2[20] = "Insta";
    strcpy(p1.string, tempstr);
    strcpy(p2.string, tempstr2);

    result = p1 + p2;

    result.display();

    return 0;
}