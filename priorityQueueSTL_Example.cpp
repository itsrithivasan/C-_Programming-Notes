#include"iostream"
#include"queue"
using namespace std;
int main(){

    priority_queue<int>p;
    p.push(9);
    p.push(2);
    p.push(4);
    p.push(11);
    p.push(6);

    while(p.size()>0){
        cout << p.top() << " ";
        p.pop();
    }
    return 0;
}