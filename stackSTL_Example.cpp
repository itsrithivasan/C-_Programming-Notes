#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    for(int i = 0; i < 5; i++){
        int a;
        cin >> a;
        s.push(a);
    }
    s.push(7);
    while(s.size() > 0){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}