#include "priority_queue.h"

using namespace std;

int main()
{
    priority_queue<int> q;
    
//    vec_1.push(2);
//    vec_1.push(7);
//    vec_1.push(9);
//    vec_1.push(5);
//    vec_1.push(3);
//    
//    vec_1.push(1);
//    vec_1.push(55);
//    vec_1.push(72);
//    vec_1.push(36);
//    vec_1.push(48);
//    
//    vec_1.push(13);
    
    q.push(3);
    q.push(2);
    q.push(10);
    q.push(1);
    q.push(30);
    q.push(8);
    q.push(9);
    q.push(16);
    q.push(13);
   
    
    while(q.size() > 0)
    {
        cout << q.top() << " ";
        q.pop();
        
    }
    cout<<endl;
    
}