/*
  第六章例题
*/

#include <iostream>
#include <climits>
#include <cctype>

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
    float naap[ArSize];//定义一个float数组，长度为6；
    cout << "Enter the NAAQs (New Age Awareness Quotients) "
        << "of\nyour neighbors.Program terminates "
        << "when you make\n" << ArSize << " entries "
        << "or enter a negative value.\n";
    int i = 0;
    float temp;
    cout << "First value: ";
    cin >> temp;
    while (i < ArSize && temp >= 0)
    {
        naap[i] = temp;
        ++i;
        if (i < ArSize)
        {
            cout << "Next value: ";
            cin >> temp;
        }
    }
    if (i == 0)
        cout << "No data--bye\n";
    else
    {
        cout << "Enter your NAAQ: ";
        float you;
        cin >> you;
        int count = 0;
        for (int j = 0;j < i;j++)
            if (naap[j] > you)
                ++count;
        cout << count;
        cout << " of your neighbors have greater awareness of\n"
            << "the New Age than you do.\n";
    }
    return 0;
}



//例题6-6；
const char* quality[4] =
{
    "10,000-meter race.\n",
    "mud tug-of-war.\n",
    "masters canoe jousting.\n",
    "pie-throwing festival.\n"
};
int P6_6()
{
    int age;
    cout << "Enter your age in years: ";
    cin >> age;
    int index;

    if (age > 17 && age < 35)
        index = 0;
    else if (age >= 35 && age < 50)
        index = 1;
    else if (age >= 50 && age < 65)
        index = 2;
    else
        index = 3;
    cout << "You qualify for the " << qualify[index];
    return 0;
}



//例题6-7；
bool is_int(double);
/*布尔函数is_int()使用climtis文件中定义的两个常量（INT_MAX和INT_MIN）
来确定其参数是否位于适当的范围内，如果是返回true，不是返回false。
*/
int P6_7()
{
    double num;
    cout << "Yo, dude!Enter an integer value: ";
    cin >> num;
    while (!is_int(num))
    {
        cout << "Out of range -- please try again: ";
        cin >> num;
    }
    int val = int(num);
    cout << "You've entered the integer " << val << "\nBye\n";
    return 0;
}  
bool is_int(double x)
{
    if (x <= INT_MAX && x >= INT_MIN)
        return ture;
    else
        return false;
}



//例题6-8；
int P6_8()
{
    cout << "Enter text for analysis, and type @"
        " to terminate input.\n";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);
    while (ch != '@')
    {
        if (isalpha(ch))//如果参数是字母，则函数返回true；
            chars++;
        else if (isspace(ch))//如果参数是标准空白字符，则函数返回true；
            whitespace++;
        else if (isdigit(ch))//如果参数是数字0~9，则返回true；
            digits++;
        else if (ispunct(ch))//如果参数是标点符号，则返回true；
            punct++;
        else
            others++;
        cin.get(ch);
    }
    cout << chars << "letters,"
        << whitespace << " whitespace,"
        << digits << " digits,"
        << punct << " punctuations, "
        << others << " others.\n";
    return 0;
}



//例题6-9；
int P6_9()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "The larger of " << a << " and " << b;
    int c = a > b ? a : b;//三相运算符，正确则返回前面，否则返回后面。
    cout << " is " << c << endl;
    return 0;
}



//例题6-10；
void showmenu();
void report();
void comfort();
int P6_10()
{
    showmenu();
    int choice;
    cin >> choice;
    while (choice != 5)
    {
        switch (choice)
        {
        case 1: cout << "\a\n";
            break;
        case 2: report();
            break;
        case 3: cout << "The boss was in all day.\n";
            break;
        case 4: comfort();
            break;
        default: cout << " That's not a choice.\n";
        }
        showmenu();
        cin >> choice;
    }
    cout << "Bye!\n";
    return 0;
}
void showmenu()
{
    cout << "Please enter 1,2,3,4,or 5: \n"
        "1) alarm           2) report\n"
        "3) alibi           4) comfort\n"
        "5) quit\n";
}
void report()
{
    cout << "It's been an excellent week for business.\n"
        "Sales are up 120%.Expenses are down 35%.\n";
}
void comfort()
{
    cout << "Your employees think you are the finest CEO\n"
        "in the industry.The board of directors think\n"
        "you are the finest CEO in the industry.\n";
}
