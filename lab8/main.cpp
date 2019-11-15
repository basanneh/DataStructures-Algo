#include <iostream>
#include "stackpair.h"

using namespace std;
void test1()
{
    stackpair<size_t> setone;
    setone.push_a(6);
    setone.push_a(5);
    setone.push_b(4);
    setone.push_b(3);
    
    cout<<endl;
    setone.display();
    cout<<endl;
    if(setone.pop_a()==5)
    { cout << "test 1 passed\n";}
    else
    {cout << "test 1 failed\n";}
    if(setone.pop_b()==3)
    { cout << "test 1 passed\n";}
    else
    {cout << "test 1 failed\n";}

}
void test2()
{
    stackpair<size_t> settwo;
    settwo.push_a(7);
    settwo.push_a(6);
    settwo.push_a(5);
    settwo.push_b(4);
    settwo.push_b(3);
    settwo.push_b(2);
    settwo.push_a(7);
    settwo.push_a(6);
    settwo.push_a(5);
    settwo.push_b(4);
    settwo.push_b(3);
    settwo.push_b(2);
    settwo.push_a(7);
    settwo.push_a(6);
    settwo.push_a(5);
    settwo.push_b(4);
    settwo.push_b(3);
    settwo.push_b(2);
    settwo.push_a(7);
    settwo.push_a(6);
    settwo.push_a(5);
    settwo.push_b(4);
    settwo.push_b(3);
    settwo.push_b(2);
    settwo.push_a(7);
    settwo.push_a(6);
    settwo.push_a(5);
    settwo.push_b(4);
    settwo.push_b(3);
    settwo.push_b(2);
    settwo.is_full_b();
    if(settwo.is_full_a()==true)
    { cout << "test 2 passed. Stack A is full\n";}
    else
    {cout << "test 2 failed. Stack A is not full\n";}
    if(settwo.is_full_b()==true)
    { cout << "test 2 passed. Stack B is full\n";}
    else
    {cout << "test 2 failed. Stack B is not full.\n";}
    
    settwo.push_a(33);
    settwo.push_b(43);
    
    settwo.pop_a();
    settwo.pop_a();
    settwo.pop_a();
    settwo.pop_a();
    settwo.pop_a();
    settwo.pop_a();
    settwo.pop_a();
    settwo.pop_a();
    settwo.pop_a();
    settwo.pop_a();
    settwo.pop_a();
    settwo.pop_a();
    settwo.pop_a();
    settwo.pop_a();
    settwo.pop_a();
    settwo.pop_a(); // Stack Under flow..
    
    settwo.pop_b();
    settwo.pop_b();
    settwo.pop_b();
    settwo.pop_b();
    settwo.pop_b();
    settwo.pop_b();
    settwo.pop_b();
    settwo.pop_b();
    settwo.pop_b();
    settwo.pop_b();
    settwo.pop_b();
    settwo.pop_b();
    settwo.pop_b();
    settwo.pop_b();
    settwo.pop_b();
    settwo.pop_b();
    
}


int main()
{
    cout << "\ntest 1\n";
    test1();
    cout << "\ntest 2\n";
    test2();
   // cout << "\ntest 3\n";
   // test3();
   // cout << "\ntest 4\n";
   // test4();
}
