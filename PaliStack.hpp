#ifndef PaliStack_hpp
#define PaliStack_hpp

#include <stdio.h>
#include <stack>
static const int capacity = 100;
//template<class Itemtype>
class paliStack{
private:
    char data[capacity];
    int used;
    
public:
    paliStack();//default constructor.
    //modification member functions.
    void push(char);
    char pop();
    //constant member functions.
    int size();
    bool empty();
};
#endif /* PaliStack_hpp */
