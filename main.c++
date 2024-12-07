/*

    This is the Program of Atm Pin Access
    Here our pin is 1234
    We have 3 attempt to access it
    otherwise our account will be locked

    ....
    ....
*/

#include <iostream>
using namespace std;
int main()
{
    int atm, i, count = 0;
    for (i = 1; i <= 3; i++)
    {
        cout << "Enter your atm pin\n";
        cin >> atm;
        if (atm == 1234)
        {
            cout << "You can access your balance.";
            break;
        }

        else
        {
            cout << "Invalid key.\n\n";
        }
        count++;
    }

    if (count >= 3)
    {
        cout << "Your accunt has been blocked.";
    }
    return 0;
}