#ifndef STACKPAIR_H
#define STACKPAIR_H
#include <cstdlib>
#include <iostream>

template <class T>
class stackpair{
    public:
    static const int CAPACITY = 30;
    stackpair();
    T pop_a();
    T pop_b();
    void push_a(T item);
    void push_b(T item);
    void display();// Display the stack
    size_t size_a();
    size_t size_b();
    bool is_empty_a();
    bool is_empty_b();
    bool is_full_a();
    bool is_full_b();
  T data[CAPACITY];  
    private:
    size_t top_A;
    size_t top_B;
};

#include "stackpair.template"
#endif
