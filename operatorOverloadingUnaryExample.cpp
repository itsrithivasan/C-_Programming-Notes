#include"iostream"
#include<string.h>

class AddString{

    public:
    char string1[20], string2[20];

    //unary operator overloading
    void operator +(){
        std::cout << "After concatenation: " << strcat(string1,string2) << std::endl; 
    }

    AddString(char str1[], char str2[]){
        strcpy(string1, str1);
        strcpy(string2, str2);
    }
    
};

int main(){

    char str1[] = "Prep";
    char str2[] = "Insta";

    AddString A(str1, str2);
 
    +A; // operator overloading in unary method.

    return 0;
}