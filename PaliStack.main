#include <iostream>
#include <stack>
#include "PaliStack.hpp"
using namespace std;
int main() {
    paliStack s1;//declaring stack objects.
    paliStack s2;//declaring stack objects.
    string pal;//declaring string variable.

    cout<<"Enter a string: "<<endl;//prompting user to input string.
    getline(cin, pal);//retrieving user input.
    
    transform(pal.begin(), pal.end(), pal.begin(), ::tolower);//c++ build in function that converts uppercase letters to lowercase letters.
    
    //extracting characters from user input string.
    for (int i=0; i<pal.length(); i++){
            s1.push(pal[i]);
    }
int i = (s1.size()/2);
    int count = s1.size();
    for(int j=i; j>0; j--){//taking half of the characters and pushing it into the other stack.
        s2.push(s1.pop());
        }
    if (count % 2 != 0) s1.pop();//this condition checks if the initially stack contains additional letter if does it pop one letter out from the stack.
        if(s1.pop()!=s2.pop()){//This conditions compare both stacks. If the letters are not the same the string is not a palindrome else the string is a palindrome.
            cout<<"The String is NOT a Palindrome."<<endl;
            return 0;
        }
        cout<<"The string is a Palindrome."<<endl;
    return 0;
}
