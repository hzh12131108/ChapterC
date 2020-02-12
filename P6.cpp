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