#include"iostream"
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string, int> myMap;
    myMap.insert({"apple", 2});
    myMap.insert({"banana", 5});
    myMap.insert({"cherry", 3});
    cout << myMap.size() << endl;

    for(auto it = myMap.begin(); it != myMap.end(); ++it){
        cout << it->first << ": " << it->second << endl;
    }
    myMap.erase("banana");
    for(auto it = myMap.begin(); it != myMap.end(); ++it){
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}