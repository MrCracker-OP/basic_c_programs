#include <iostream>
using namespace std;

class student
{
public:
    int roll_no;
    char name[20];

    void get1()
    {
        cout << "Enter Name and roll_no:--";
        cin >> name >> roll_no;
    }
};
class test
{
public:
    int part1, part2;
    void get2()
    {
        cout << "\nEnter part 1 and part 2 marks:--";
        cin >> part1 >> part2;
    }
};
class result : public student, public test
{
public:
    int result;

    void put1()
    {
        result = part1 + part2;
        cout << "\n\nName:--" << name << endl;
        cout << "Roll no:--" << roll_no << endl;
        cout << "Result=" << result << endl;
    }
};

int main()
{
    result s;
    s.get1();
    s.get2();
    s.put1();
    return 0;
}