#include<iostream>

class Student{
    int feet = 0, inches = 0; //[0, infinity] [0,11]

    public:
    void getHeight(int f, int i){
        if(f >= 0 && (i >= 0 && i<12)){
            feet = f;
            inches = i;
        }
        else{
            std::cout << "Wrong height, default 0, 0 will be taken" << std::endl;
        }
    }

    bool operator > (Student s2){
        if(feet > s2.feet)
            return true;
        else if (feet == s2.feet && inches > s2.inches)
            return true;
        return false;
    }
};

int main(){

    Student s1, s2;
    s1.getHeight(5,10);
    s2.getHeight(5,11);

    if(s1 > s2){
        std::cout << "Student 1 is taller" << std::endl;
    }
    else if(s2 > s1){
        std::cout << "Student 2 is taller" << std::endl;
    }
    else
        std::cout << "Same height" << std::endl;

    return 0;
}