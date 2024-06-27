#include"iostream"
class Rectangle{
    private:
    int length, breadth;

    public:
    //INDEX 
    void setlength(int len);
    void setbreadth(int bre);
    int area();

};

int main(){

    Rectangle rect;

    rect.setlength(10);
    rect.setbreadth(20);

    std::cout << rect.area() << std::endl;

    return 0;
}

void Rectangle:: setlength(int len){
        length = len;
}

void Rectangle:: setbreadth(int bre){
        breadth = bre;
}
int Rectangle:: area(){
        return length * breadth;
}
