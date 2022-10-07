#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int ele, val, i, flag = 0, j;
    cout << "Enter the size of array:--";
    cin >> ele;
    for (i = 0; i < ele; i++)
    {
        cout << "enter " << i + 1 << " element" << endl;
        cin >> arr[i];
    }
    cout << "Enter the value you want to find:--";
    cin >> val;

    for (i = 0; i < ele; i++)
    {
        if (val == arr[i])
        {
            flag = flag + 1;
            j = i;
            break;
        }
    }
    if (flag == 0)
        cout << "Element not found";
    else
        cout << "Element found at:--" << j << " position";
    return 0;
}