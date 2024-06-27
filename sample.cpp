#include "iostream"
#include <string.h>
static int i = 0;

class student{
    
    private:
    int rollNo;
    char name[20];
    
    public:
    // setter
    void setRollNo(){
        rollNo = ++i;
    }

    void setName(char *nme){
            strcpy(name,nme);
        }

    // getter
    int getRollNo(){
        return rollNo; 
    }

    char *getName(){
        return name;
    }
};

int main()
{
    student s1,s2;
   
    s1.setRollNo();
    s2.setRollNo();
    // temp
    char temp[20];
    std::cout << "Enter the 1st name : ";
    std::cin >> temp;

    s1.setName(temp);
    std::cout << "Enter the 2nd name : ";
    std::cin >> temp;
    s2.setName(temp);

    std::cout << " The Roll no for " << s1.getName() << " is " << s1.getRollNo()<< std::endl;
    std::cout << " The Roll no for " << s2.getName() << " is " << s2.getRollNo()<< std::endl;
    
    return 0;
}

