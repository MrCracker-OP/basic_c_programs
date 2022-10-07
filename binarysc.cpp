#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int size, val, i, flag = 0, mid, low_in = 0, high_in;
    cout << "Enter the size of list:--";
    cin >> size;
    high_in = size;
    cout << "Enter the elements of list in Ascending order only" << endl;
    for (i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " element of list" << endl;
        cin >> arr[i];
    }
    cout << "Enter the value you want to find:--";
    cin >> val;
    // if (val==arr[0])
    // {
    //     cout<<"Element found at index 0";
    // }
    // else if (val==arr[size])
    // {
    //     cout<<"Element found at index "<<size;
    // }
    // else{
    for (i = 0; i < size; i++)
    {
        mid = (low_in + high_in) / 2;
        if (val == arr[mid])
        {
            flag = flag + 1;
            break;
        }
        else if (val > arr[mid])
        {
            low_in = mid + 1;
        }
        else if (val < arr[mid])
        {
            high_in = mid - 1;
        }
    }
    //}
    if (flag == 0)
        cout << "Element not found";
    else
        cout << "Element found at:-- " << mid + 1 << " position";

    return 0;
}