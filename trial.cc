/**
*author: Sadman Ahmed Shanto
*date: 2020-08-31
*/
#include <iostream>
#include <string>
using namespace std;

//function prototypes
void sayHelloWorld();
int addTwoNumbers(int n1, int n2);

//main function
int main() {
    sayHelloWorld();    
    int number;
    int n1, n2;
    cout << "Insert number 1: ";
    cin >> n1;
    cout << "Insert number 2: ";
    cin >> n2;
    number = addTwoNumbers(n1, n2);
    cout << "number is " << number << endl;
}

//function definition
void sayHelloWorld(){
    cout << "Hello World" << endl;    
}

int addTwoNumbers(int n1, int n2){
    int result;
    result = n1 + n2;
    return result;
}
