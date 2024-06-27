#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    float y = 5.33333333333333333333333333;
    double x = 5.33333333333333333333333333;
    std::cout << "for float 6 decimal spaces" << std::endl;
    std::cout <<"float :"<< fixed << setprecision(30) << y << std::endl;
    std::cout <<"float :"<< fixed << setprecision(2) << y << std::endl;

    std::cout << "for double 15 decimal spaces" << std::endl;
    std::cout <<"Double :"<< fixed << setprecision(30) << x << std::endl;
    std::cout <<"Double :"<< fixed << setprecision(2) << x << std::endl;
    
    return 0;
}