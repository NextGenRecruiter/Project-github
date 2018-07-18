//  main.cpp
//  Pointers
//  Created by Misky Abshir on 7/18/18.
//  Copyright © 2018 Misky Abshir. All rights reserved.
#include <iostream>
using namespace std;

void increment(int* a, int* b);

int main() {
    
    int a, b;
    
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"This program will output the sum of two numbers and their absolute value"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    
    increment(&a, &b);
   
    return 0;
}

void increment(int* a, int* b){
    int sum = 0;
    int absoluteV = 0;
    
    sum = *a + *b;
    absoluteV = *a + *b > 0 ? *a - *b : -(*a - *b);
    
    *a = sum;
    *b = absoluteV;
    
    cout<<"The sum of the two numbers are "<<sum<<endl;
    cout<<"The absolute value of the two numbers are "<<absoluteV<<endl;
    
}
