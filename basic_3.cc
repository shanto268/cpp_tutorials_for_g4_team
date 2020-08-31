/**
 *author: Sadman Ahmed Shanto
 *date: 2020-08-26
 *purpose: references and I/0
 * 
 A reference variable is an alias. Once a reference is initialized with a variable, the variable name name may be used to refer to the variable.
 */
#include <iostream>
#include <string>
using namespace std;

//function prototypes
void referenceExample();
void referenceExample2();
void swap(int& x, int& y);
void introduce();

//main function
int main() {
    referenceExample();
    referenceExample2();
    introduce();
}

//function definition
void referenceExample(){
    // declare simple variables
    int    i;
    double d;

    // declare reference variables
    int&    r = i;
    double& s = d;

    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << r  << endl;

    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s  << endl;
}

void referenceExample2(){
    // local variable declaration:
    int a = 100;
    int b = 200;

    cout << "Before swap, value of a :" << a << endl;
    cout << "Before swap, value of b :" << b << endl;

    /* calling a function to swap the values.*/
    swap(a, b);

    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl;
}


// function definition to swap the values.
void swap(int& x, int& y) {

    int temp;
    temp = x; /* save the value at address x */
    x = y;    /* put y into x */
    y = temp; /* put x into y */

    return;
}


void introduce(){
    char name[50];
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Your name is: " << name << endl;
}
