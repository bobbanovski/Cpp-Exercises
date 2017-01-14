
/*Create a two dimensional 3x3 array of integers that holds some numbers of your choice (each array cell should be
initialised in program).

Write a program that asks the user to input x and y numbers (from 1 to 3). The program prints out
in the console the value that is stored in the array cell numbered by x, y coordinates.
Take into consideration that coordinates starts counting from ONE when array starts counting from ZERO.*/
#include <iostream>
#include <string>
using namespace std;
main()
{
    int xcor, ycor;
    int arr[3][3] = {{1,3,4},{3,8,4},{9,3,6}};
    cout<<"Enter x coordinate: "<<endl;
    cin>> xcor;
    cout<<"Enter y coordinate: "<<endl;
    cin>> ycor;
    cout<<"User inputted:"<<endl<<"x: "<<xcor<<endl<<"y: "<<ycor<<endl<<endl;
    cout<<"Output:"<<endl;
    cout<<arr[xcor+1][ycor+1];
}
