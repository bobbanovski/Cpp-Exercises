
/*
Exercise1
Basing on the knowledge of logical operators try to modify the exercise from the lecture.
Write a program that asks the user to input three integer numbers. The first two should
represent the minimum and maximum value of the interval respectively. Then the program
should check if the third number is contained within the interval. The result should be
expressed with sentence and logical resultusing boolean type variable.
Exercise 2.

Modify the Exercise 1 in order to prevent a situation where maximum value inputted is lower than the
minimum value. The user should see an error. And the program should stop.
*/
#include <iostream>
#include <string>
using namespace std;

main()
{
    int input1 = 1, input2 = -1, input3;
    while(input1 > input2)
    {
        cout<<"Please input the minimum value: "<<endl;
        cin>>input1;
        cout<<"Please input the maximum value: "<<endl;
        cin>>input2;
        if(input1 > input2)
            cout<<"first input must be lower than second input"<<endl;
    }
    cout<<"Please input a value to check: "<<endl;
    cin>>input3;

    bool check;
    check = (input3 > input1 && input3 < input2);
    if(check == 1)
        cout<<check<<" Value is within the range of the minima and maxima"<<endl;
    else
        cout<<check<<" Value does not lie within the range"<<endl;
}
