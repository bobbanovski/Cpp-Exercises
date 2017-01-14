
/*Exercise 1.

Write an application that asks the user to input four numbers. The inputted numbers should be stored in a 4 element array of doubles. The numbers should be
summarized and the result printed in the console as well as the address of first and last element of the array.
*/
#include <iostream>
using namespace std;

main()
{
    int arrayLength = 4, result = 0, tempNum;
    int arr[arrayLength] = {0};

    cout<<"Please enter "<< arrayLength<< " numbers to undergo addition"<<endl;

    for(int i = 0; i < arrayLength; i++){
        cout<<"Number "<< (i+1) << ": ";
        cin>>tempNum;
        arr[i] = tempNum;
    }

    for(int i = 0; i < arrayLength; i++)
    {
        result += arr[i];
        cout<< arr[i] <<" + ";
    }
    cout<<"0"<<endl;
    cout<<"Result of summation: "<< result<<endl;
    cout<<"First address of array: "<<&arr[0]<<endl;
    cout<<"Last address of array: "<<&arr[arrayLength];
}
