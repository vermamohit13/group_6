#include "functions.h"
#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n < 0)
    {   // Added changes for negative numbers
        cout<<"Enter a positive no. as an input \n";
        return -1;
    }
    else if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
// Vishwas Made a change
