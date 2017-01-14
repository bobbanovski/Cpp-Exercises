
/*Exercise 3.

Write a program immitating a vending machine. The program should present the user
with a choice of 6 products of your choice (Coke, Water, Chocolate Bar etc). Then allow
the user to choose a product by entering a number 1-6. Add an exception for invalid input
if the user inputs a number which doesn't correspond to any choice.*/

#include <iostream>
#include <string>
using namespace std;

main()
{
    int choice = 0;
    string cola = "1 - Cola",
    pepsi = "2 - Pepsi",
    fanta = "3 - Fanta",
    pepa = "4 - Dr Pepa",
    dew = "5 - Mountain Dew",
    lemonade = "6 - Lemonade",
    selected;
    while(!(choice > 0 && choice < 7))
    {
        cout<<"Please select product: "<<endl;
        cout<<cola<<endl;
        cout<<pepsi<<endl;
        cout<<fanta<<endl;
        cout<<pepa<<endl;
        cout<<dew<<endl;
        cout<<lemonade<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                selected = cola;
                break;
            case 2:
                selected = pepsi;
                break;
            case 3:
                selected = fanta;
                break;
            case 4:
                selected = pepa;
                break;
            case 5:
                selected = dew;
                break;
            case 6:
                selected = lemonade;
                break;
            default:
                cout<<"Please select a number from the menu"<<endl;
        }
    }

    cout<<selected<<" was selected"<<endl;

}
