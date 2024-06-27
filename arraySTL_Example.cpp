#include<iostream>
#include<array>

int main(){

    std::array<int,5> arr;

    for(int i = 0; i < 5; i++){
        std::cin >> arr[i];
    }

    for(int i = 0; i < 5; i++){
        std::cout << arr[i] << " ";
    }

    return 0;
} 