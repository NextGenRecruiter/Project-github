
/* Reversing array indexes
  Created by Misky Abshir on 7/18/18.
  Copyright © 2018 Misky Abshir. All rights reserved.
*/

#include <iostream>
using namespace std;

int main() {
    
    int N;//declaring variable for the size of the array
    
    cout<<"Enter the size of the array: ";//prompting the user to enter the size of the array
    cin>>N;//accepting the size of the array
    int *A = new int[N];//declaring pointer array
    //checking condition, while index is less than array size ask user to enter index.
    for (int i = 0; i<N; i++){
        cout<<"enter index"<<endl;
        cin>>A[i];
        cout<<endl;
    }
    //this while loop prints the reversed array and puts constraint by putting &&N to end the loop when condition reaches 0.
    while(cout<<A[--N]<<" " && N);
    cout<<endl;
    
    //freeing space at the heap by deleting pointer
    delete [] A;
    return 0;
}
