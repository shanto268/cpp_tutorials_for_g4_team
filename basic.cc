/**
*author: Sadman Ahmed Shanto
*date: 2020-08-26
*/
#include <iostream>
#include <string>

//constants
#define PI 3.142

using namespace std;

//function prototypes
void sayHello(string name);
int add(int x, int y);
double getArea(double radius);

//main function
int main() {
   sayHello("Shanto"); 
   int result = add(7,12);
   double radius = 1.21;
   cout << "The result is " << result << endl;
   cout << "The area of a circle with radius " << radius << " is " << getArea(radius) << endl;
}

//function definition
void sayHello(string name){
    cout << "Hello " << name << endl;
}

/**
* @brief: adds two numbers
*
* @param: int x
*       : int y
*
* @return: int
*/
int add(int x, int y)
{
    return x + y;
}

/**
* @brief: calculates area from radius
*
* @param: double radius
*
* @return: double
*/
double getArea(double radius)
{
    return PI * radius * radius;
}
