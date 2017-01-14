
#include <iostream>
#include <string>
using namespace std;
main()
{
    /*Write a program that asks the user to input an integer number. Then starting from that
number the program prints out in the console next 100 numbers.*/

    //int startNum;
    //cout<<"Please enter a starting integer"<<endl;
    //cin>>startNum;
    //for(int i = startNum; i <= startNum + 100; i++)
    //    cout<<i<<", ";

/*Write a program that prints out in the console all upper case and lower case letters from
the alphabet (A-Z).*/


/*
Write a program that asks the user to input any number (integer or floating point) and
the n-th power (integer) the number should be raised to. Then calculate the result of the
exponentiation of this number to the said power.*/
/*
    float base, result=1;
    int power;
    cout<<"Please enter a base number: "<<endl;
    cin>>base;
    cout<<"Please enter the power to raise to: "<<endl;
    cin>>power;
    for(int i = 1; i <= power; i++)
    {
        result *= base;
    }
    cout<<result;
    */

/*Write a program that asks the user to input any integer number n. Then calculate the result
of the factorial operation (n! - 1*2*3*...*n). Print in the console result of the n factorial
as well as the factorial of numbers before n.*/
/*
    int numStart, result = 1;
    cout<<"Enter number for factorial: "<<endl;
    cin>>numStart;
    for(int i = 1; i <= numStart; i++)
    {
        result *= i;
        cout<<result<<endl;
    }
    */

/*Write a program that asks the user to input an integer number. Then the program should print out
in the console the inputted number of asterisks (*). Furthermore, it should break the line (endl)
every 5 asterisks printed.*/
/*
    int numAst;
    cout<<"Enter number of asterisks to display"<<endl;
    cin>>numAst;
    for(int i = 0; i<numAst; i++)
    {
        if((i%5)==0)
            cout<<endl<<"*";
        else
            cout<<"*";
    }
*/

/*Write a program that asks the user to input 5 integer numbers (store them in a 5 element array).
Then it checks if the inputted numbers were odd or even and prints that information out in the console.
*/
    int arr[5] = {0};
    for(int i = 0; i < 5; i++)
    {
        cout<<"Enter number "<< i+1 <<": ";
        cin>>arr[i];
    }
    for(int i = 0; i<5; i++)
    {
        if(arr[i] % 2 == 0)
            cout<<"Element "<<i+1<<": "<<arr[i]<<", is even"<<endl;
        else
            cout<<"Element "<<i+1<<": "<<arr[i]<<", is odd"<<endl;
    }
}
