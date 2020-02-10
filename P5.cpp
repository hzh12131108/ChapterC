/*
第五章习题
*/

#include <iostream>
#include <string>
#include <cstring>
#include <ctime>
using namespace std;

//例题5-1；
int P5_1()
{
	int i;
	for (i = 0; i < 5; i++)
		cout << "C++ knows loops.\n";
	cout << "C++ knows when to stop.\n";
	return 0;
}



//例题5-2；
int P5_2()
{
	cout << "Enter the starting countdown value: ";
	int limit;
	cin >> limit;
	int i;
	for (i = limit;i; i--)
		cout << "i = " << i << "\n";
	cout << "Done now that i = " << i << "\n";
	return 0;
}



//例题5-3；
int P5_3()
{
	int x;

	cout << "The expression x = 100 has the value ";
	cout << (x = 100) << endl;
	cout << "Now x = " << x << endl;
	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha);
	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;
	return 0;
}



//例题5-4；
const int ArSize = 16;
int P5_4()
{
	long long factorials[0] = 1LL;
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < ArSize; i++)
		std::cout << i << "! = " << factorials[i] << std::endl;
	return 0;
}



//例题5-5；
int P5_5()
{
	using std::cout;
	using std::cin;
	using std::endl;
	cout << "Enter an integer: ";
	int by;
	cin >> by;
	cout << "Counting by " << by << "s:\n";
	for (int i = 0; i < 100; i = i + by)
		cout << i << endl;
	return 0;
}



//例题5-6；
int P5_6()
{
	cout << "Enter a word: ";
	string word;
	cin >> word;

	for (int i = word.size() - 1; i >= 0;i--)
		cout << word[i];
	cout << "\nBye.\n";
	return 0;
}



//例题5-7；
int P5_7()
{
	int a = 20;
	int b = 20;
	using std::cout;
	cout << "a   = " << a << ":  b = " << b << "\n";
	cout << "a++ = " << a++ << ": ++b = " << ++b << "\n";
	cout << " a   = " << a << ":  b = " << b << "\n";
	return 0;
}



//例题5-8；
int P5_8()
{
	cout << "The Amazing Accounto will sum and average ";
	cout << "five numbers for you.\n";
	cout << "Please enter five values:\n";
	double number;
	double sum = 0.0;
	for (int i = 1;i <= 5;i++)
	{
		cout << "Value " << i << ": ";
		cin >> number;
		sum += number;
	}
	cout << "Five exquisite choices indeed! ";
	cout << "They sum to " << sum << endl;
	cout << "and average to " << sum / 5 << ".\n";
	cout << "The Amazing Accounto bids you adieu!\n";
	return 0;
}



//例题5-9；
int P5_9()
{
	cout << "Enter a word: ";
	string word;
	cin >> word;

	char temp;
	int i, j;
	for (j = 0;i = word.size() - 1;j < i; --i; ++j)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\nDone\n";
	return 0;
}



//例题5-10；
int P5_10()
{
	int quizscores[10] = { 20,20,20,20,20,19,20,18,20,20 };
	cout << "Doing it right:\n";
	int i;
	for (i = 0;quizscores[i] == 20;i++)
		cout << "quiz " << i << " is a 20\n";

	cout << "Doing it dangerously wrong:\n";
	for (i = 0;quizscores[i] = 20;i++)
		cout << "quiz " << i << " is a 20\n";

	return 0;
}



//例题5-11；
int P5_11()
{
	char word[5] = "?ate";
	for (char ch = 'a';strcmp(word, "mate");ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends,word is " << word << endl;
	return 0;
}



//例题5-12；
int P5_12()
{
	string word = "?ate";
	for (char ch = 'a';word != "mate";ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends,word is " << word << endl;
	return 0;
 }



//例题5-13；
const int ArSize = 20;
int P5_13()
{
	char name[ArSize];
	cout << "Your first name,please: ";
	cin >> name;
	cout << "Here is your name,verticalized and ASCIIized:\n";
	int i = 0;
	while (name[i] != '\0')
	{
		cout << name[i] << ": " << int(name[i]) << endl;
		i++;
	}
	return 0;
}



//例题5-14；
int P5_14()
{
	cout << "Enter the delay time,in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
		;
	cout << "done\a\n";
	return 0;
}



//例题5-15；
int P5_15()
{
	int n;
	cout << "Enter numbers in the range 1-10 to find ";
	cout << "my favorite number\n";
	do
	{
		cin >> n;
	} while (n != 7);
	cout << "Yes,7 is my favorite.\n";
	return 0;
}



//例题5-16；
int P5_16()
{
	char ch;
	int count = 0;
	cout << "Enter characters;enter # to quit: \n";
	cin >> ch;
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin >> ch;
	}
	cout << endl << count << " characters read\n";
	return 0;
}



//例题5-17；
int P5_17()
{
	char ch;
	int count = 0;

	cout << "Enter characters;enter # to quit:\n";
	cin.get(ch);
	while (ch != '#')
	{
		cout ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << "characters read\n";
	return 0;
}



//例题5-18；
int P5_18()
{
	char ch;
	int count = 0;
	cin.get(ch);
	while (cin.fail() == false)
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << "characters read\n";
	return 0;
}



//例题5-19
int P5_19(void)
{
	int ch;
	int count = 0;

	while ((ch = cin.get()) != EOF)
	{
		cout.put(char(ch));
		++count;
	}
	cout << endl << count << " characters read\n";
	return 0;
}



//例题5-20；
const int Cities = 5;
const int Years = 4;
int P5_20()
{
	const char* cities[Cities] =
	{
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};

	int maxtemps[Years][Cities] =
	{
		{96,100,87,101,105},
		{96,98,91,107,104},
		{97,101,93,108,107},
		{98,103,95,109,108}
	};

	cout << "Maximum temperatures for 2008 - 2011\n\n";
	for (int city = 0;city < Cities; ++city)
	{
		cout << cities[city] << ":\t";
		for (int year = 0;year < Years;++year)
			cout << maxtemps[year][city] << "\t";
		cout << endl;
	}
	return 0;
}

