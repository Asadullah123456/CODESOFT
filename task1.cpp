#include <iostream>
using namespace std;
int randgen()
{
    int random = 1 + (rand() % 100);
    return random;
}

int main()
{
    cout << "---------RANDOM NUMBER GUESS GAME------------"<<endl;
    int num, num2;
    num2 = randgen();
    bool flag = true;
    while (flag)
    {
        cout << "Guess the number between 1-100"<<endl;
        cin>>num;
        if (num > 100)
        {
            cout << "You have typed number out of range please try again";
        }
        else if (num == num2)
        {
            cout << "you have gussed the number " << endl;
            flag = false;
        }
        else if (num < num2)
        {
            if (num2 - num < 5)
            {
                cout << "Keep trying you are too close" << endl;
            }
            else if (num2 - num < 10)
            {
                cout << "Keep trying you are close" << endl;
            }
            else
            {
                cout << " you are too low" << endl;
            }
        }
        else if (num > num2)
        {
            if (num - num2 < 5)
            {
                cout << "Keep trying you are too close" << endl;
            }
            else if (num - num2 < 10)
            {
                cout << "Keep trying you are close" << endl;
            }
            else
            {
                cout << " you are too high" << endl;
            }
        }
    }
}
