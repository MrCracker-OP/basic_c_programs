#include <iostream>
#include <string>
#include <chrono>
using namespace std;

class PrintByLoop
{
    string a = "HELLO WORLD";
    int i = 0;

public:
    // void accept()
    // {
    //     cout << "Enter a string to print by loop:--";
    //     cin >> a;
    // }
    void print()
    {
        for (char j = 'A'; j <= 'Z'; j++)
        {

            if (j == a[i])
            {
                cout << a.substr(0, i) << j << endl;
                j = 'A';
                i++;
                _sleep(50);
            }
            else if (a[i] == ' ')
            {
                cout << a.substr(0, i) << " " << endl;
                j = 'A';
                i++;
                _sleep(50);
            }

            else if (j != a[i] && i < a.length())
            {
                cout << a.substr(0, i) << j << endl;
                _sleep(50);
            }
        }
    }
};
int main()
{
    PrintByLoop p;
 //   p.accept();
    p.print();

    return 0;
}