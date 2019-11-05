//  main.cpp
//  Pointers
//  Created by Misky Abshir on 7/18/18.
//  Copyright © 2018 Misky Abshir. All rights reserved.
#include <iostream>
using namespace std;

//function prototype
void result(int* paramOne, int* paramTwo);

int main() {
    //local variables
    int paramOne, paramTwo;
    
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"This program will output the sum of two numbers and their absolute value"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"Enter the first number: "<<endl;
    cin>>ParamOne;
    cout<<"Enter the second number: "<<endl;
    cin>>paramTwo;
    
    //sending user input to increment function
    result(&paramOne, &paramTwo);
   
    return 0;
}

void result(int* paramOne, int* paramTwo){
    int sum = 0;
    int absoluteValue = 0;
    //calculating the sum of two numbers
    sum = *paramOne + *paramTwo;
    //calculating the absolute value of two numbers by using ternary operator
    absoluteValue = *paramOne + *paramTwo > 0 ? *paramOne - *paramTwo : -(*paramOne - *paramTwo);
    
    *paramOne = sum;
    *paramTwo = absoluteValue;
    
    //printing results
    cout<<"The sum of the two numbers are "<<sum<<endl;
    cout<<"The absolute value of the two numbers are "<<absoluteValue<<endl;
    
}
