/*
  第六章例题
*/

#include <iostream>
using namespace std;
using std::cin;
using std::cout;



//例题6-1；
int P6_1()
{
    char ch;
    int space = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.')
    {
        if (ch == '')//判断ch是否为空字符；
            ++space;
        ++total;
        cin.get(ch);
    }
    cout << spaces << " spaces," << total;
    cout << " characters totla in sentence\n";
    return 0;
}



//例题6-2；
int P6_2()
{
    char ch;
    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);
    while (ch != '.')
    {
        if (ch == '\n')
            std::cout << ch;
        else
            std::cout << ++ch;
    }
    std::cout << "\nPlease excuse the slight confusion.\n";
    return 0;
}



//例题6-3；
const int Fave = 27;
int P6_3()
{
    int n;
    cout << "Enter a number in the range 1-100 to find ";
    cout << "my favorite number: ";
    do
    {
        cin >> n;
        if (n < Fave)//if else 结构的用法；
            cout << "Too low -- guess again: ";
        else if (n > Fave)
            cout << "Too high -- guess again: ";
        else
            cout << Fave << " is right!\n";
    } while (n != Fave);
    return 0;
}



//例题6-4；
int P6_4()
{
    cout << "This program may reformat your hard disk\n"
        "and destory all your data.\n"
        "Do you wish to continue?<y/n>";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'y')
        cout << "You were warned!\a\a\n";
    else if (ch == 'n' || ch == 'N')
        cout << "A wise choice ... bye\n";
    else
        cout << "That wasn't a y or n!Apparently you "
        "can't follow\ninstructions,so "
        "I'll trash your disk anyway.\a\a\a\n";
    return 0;
}



//例题6-5；
const int ArSize = 6;
int P6_5()
{
    float naap[ArSize];
    cout << "Enter the NAAQs (New Age Awareness Quotients) "
        << "of\nyour neighbors.Program terminates "
        << "when you make\n" << ArSize << " entries "
        << "or enter a negative value.\n";
}
