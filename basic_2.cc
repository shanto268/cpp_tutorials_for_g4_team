/**
 *author: Sadman Ahmed Shanto
 *date: 2020-08-26
 *purpose: arrays, and pointers
 */
#include <iostream>
#include <string>
using namespace std;

//function prototypes
void pointerExample(int var);
void referenceExample();
double getAverage(double *arr, int size);

//main function
int main() {
    int number_of_products = 10;
    double price_of_products[number_of_products];
    int availability_of_products[] = {0,0,12,1,3,4,5,9,111,5};
    double avg;

    for (int i=0;i< number_of_products;i++){
        price_of_products[i] = i*10;
    }

    //pointerExample(12);
    avg = getAverage(price_of_products, number_of_products);
    cout << "Average value is: " << avg << endl; 

    return 0;
}

//function definition
void pointerExample(int var){
    int  var1;
    char var2[10];

    cout << "Address of var1 variable: ";
    cout << &var1 << endl;

    cout << "Address of var2 variable: ";
    cout << &var2 << endl;

    int  *ip;        // pointer variable 
    ip = &var;       // store address of var in pointer variable

    cout << "Value of var variable: ";
    cout << var << endl;

    // print the address stored in ip pointer variable
    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    // access the value at the address available in pointer
    cout << "Value of *ip variable: ";
    cout << *ip << endl;

}


double getAverage(double *arr, int size) {
    int i, sum = 0;       
    double avg;          

    for (i = 0; i < size; ++i) {
        sum += arr[i];
    }
    avg = double(sum) / size;

    return avg;
}
