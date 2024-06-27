#include<iostream>
#include<forward_list>
using namespace std;
int main(){

    forward_list<int>flist;
    flist.push_front(10);
    flist.push_front(20);
    flist.push_front(30);
    flist.push_front(40);

    forward_list<int> :: iterator itr;

    for(itr = flist.begin(); itr != flist.end(); ++itr){
        cout << *itr << endl;
    }

    flist.pop_front();
    flist.emplace_front(50);
    cout << "       " << endl;
    for(itr = flist.begin(); itr != flist.end(); ++itr){
        cout << *itr << endl;
    }
    return 0;
}