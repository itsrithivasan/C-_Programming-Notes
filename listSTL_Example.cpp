#include<iostream>
#include"list"
using namespace std;
int main(){
    int n;
    cin >> n;
    list<int>g;
    for (int i = 0; i<n;i++){
        int f;
        cin>>f;
        g.push_back(f);
    }
    g.push_front(5);
    for( auto it = g.begin(); it != g.end(); ++it){
        cout << *it << " ";
    }
    return 0;
}