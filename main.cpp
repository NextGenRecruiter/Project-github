//  main.cpp
//  BirthDayGame
#include <iostream>
#include<math.h>
#include<iomanip>

int main() {
    using namespace std;

    cout<<"**Welcome to Birthday Guessing Game**"<< endl;
    cout<<"Please answer the set your birthday appears in the following sets\n"<< endl;
    
    cout<<"set One"<<endl;
    cout<<"[1 3 5 7 9 11 13 15 17]"<<endl;
    cout<<"[19 21 23  25 27 29 31]\n"<<endl;
    
    cout<<"set Two"<<endl;
    cout<<"[1 3 6 7 10 11 14 15 18]"<<endl;
    cout<<"[19 24 2 23 26 27 30 31]\n"<<endl;
    
    cout<<"set Three"<<endl;
    cout<<"[4 5 6 7 12 13 14 15]"<<endl;
    cout<<"[21 2 23 28 29 30 31]\n"<<endl;
    
    cout<<"set Four"<<endl;
    cout<<"[8 9 10 11 12 13 14 15]"<<endl;
    cout<<"[25 26  27 28 29 30 31]\n"<<endl;
    
    cout<<"set Five"<<endl;
    cout<<"[16 17 18 19 20 21 22 23]"<<endl;
    cout<<"[2 25  26 27 28 29 30 31]\n"<<endl;
    
    int setOne=pow(2,0);
    cout<<"Is your birthday in set 1 enter 1 for yes and 0 for no:\n"<<endl;
    cin>>setOne;
    if (setOne==1){
        setOne=1*pow(2,0);
    }
    else if (setOne==0){
        setOne=0*pow(2,0);
    }
    
    int setTwo=pow(2,1);
    cout<<"Is your birthday in set 2 enter 1 for yes and 0 for no:\n"<<endl;
    cin>>setTwo;
    if (setTwo==1){
        setTwo=1*pow(2,1);
    }
    else if (setTwo==0){
        setTwo=0*pow(2,1);
    }
    
    int setThree=pow(2,2);
    cout<<"Is your birthday in set 3 enter 1 for yes and 0 for no:\n"<<endl;
    cin>>setThree;
    if (setThree==1){
        setThree=1*pow(2,2);
    }
    else if (setThree==0){
        setThree=0*pow(2,2);
    }
    
    int setFour=pow(2,3);
    cout<<"Is your birthday in set 4 enter 1 for yes and 0 for no:\n"<<endl;
    cin>>setFour;
    if (setFour==1){
        setFour=1*pow(2,3);
    }
    else if (setOne==0){
        setFour=0*pow(2,3);
    }
    
    int setFive=pow(2,4);
    cout<<"Is your birthday in set 5 enter 1 for yes and 0 for no:\n"<<endl;
    cin>>setFive;
    if (setFive==1){
        setFive=1*pow(2,4);
    }
    else if (setFive==0){
        setFive=0*pow(2,0);
    }
    
    int Birthday;
    
    Birthday = (setOne + setTwo + setThree + setFour + setFive);

    cout<<"your birthday is " <<Birthday<< endl;


    return 0;
}
