#include<iostream>
#include<set>
using namespace std;

int main(){

    multiset<int> ms;
    for (int i = 0; i < 6; i++){
        int a;
        cin >> a;
        ms.insert(a);
    }

    ms.erase(ms.find(4));
    for(auto i = ms.begin(); i != ms.end(); ++i)
    {
        cout << *i << " ";
    }
    return 0;
}