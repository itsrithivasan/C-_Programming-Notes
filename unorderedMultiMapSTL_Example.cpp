#include"iostream"
#include<unordered_map>
using namespace std;
int main(){
    unordered_multimap<string, int> myMap;
    myMap.insert({"apple", 1});
    myMap.insert({"banana", 2});
    myMap.insert({"apple", 3});
    myMap.insert({"pear", 4});
    
    for(auto& kv : myMap){
        cout << kv.first << " => " << kv.second << endl;
    }
    myMap.erase("pear");

    for (auto it = myMap.begin(); it != myMap.end(); ++it){
        cout << it->first << " => " << it->second << endl;
    }
    cout << endl;
    return 0;
}