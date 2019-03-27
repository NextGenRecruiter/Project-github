//
//  PaliStack.cpp
//  Project7
//
//  Created by Misky Abshir on 3/18/19.
//  Copyright © 2019 Misky Abshir. All rights reserved.
//

#include "PaliStack.hpp"
//template<class Itemtype>
paliStack::paliStack(): used(0){
}
//template<class Itemtype>
void paliStack::push(char entry){
    data[used++] = entry;//pre-incrementing used.
}
//template<class Itemtype>
char paliStack::pop(){
    return data[--used];//decrementing used.
}
//template<class Itemtype>
int paliStack::size(){
    return used;
}
//template<class Itemtype>
bool paliStack::empty(){
    return (used==0);
}
