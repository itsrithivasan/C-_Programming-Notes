#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    multimap<string, int> myMap;
    myMap.insert({"apple", 3});
    myMap.insert({"banana", 2});
    myMap.insert({"orange", 4});
    myMap.insert({"banana", 5});

    cout << myMap.size() << endl;

    map<string, int> :: iterator it;

    for (it = myMap.begin(); it != myMap.end(); ++it){
        cout << it->first << " => " << it->second << endl;
    }

    return 0;
}