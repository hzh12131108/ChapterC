/*
第四章例题
*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//例题4-1；
int P4_1()
{
	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;

	int yamcosts[3] = { 20,30,5 };

	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[1] << " yams costs ";
	cout << yamcosts[1] << "cents per yam.\n";
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	total = total + yams[2] * yamcosts[2];
	cout << "The total yam expense is " << total << " cents.\n";

	cout << "\nSize of yams array = " << sizeof yams;
	cout << " bytes.\n";
	cout << "Size os one element = " << sizeof yams[0];
	cout << " bytes.\n";
	return 0;
}

//例题4-2；
int P4_2()
{
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++owboy";

	cout << "Howdy! I'm " << name2;
	cout << "! What's your name?\n";
	cin >> name1;
	cout << "Well," << name1 << "' your name has ";
	cout << strlen(name1) << "letters and is stored\n";
	cout << "in a array of " << sizeof(name1) << " bytes.\n";
	cout << "Your initial is " << name1[0] << ".\n";
	name2[3] = '\0';
	cout << "Here are the first 3 characters of my name: ";
	cout << name2 << endl;
	return 0;
  }

//例题4-3；
int P4_3() 
{
	cosnt int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin >> name;
	cout << "Enter your favorite dessert:\n";
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you," << name << ".\n";
	return 0;
}

//例题4-4；
int P4_4() 
{
	const int ArSize1 = 20;
	char name[ArSize1];
	char dessert[ArSize1];

	cout << "Enter your favorite dessert:\n";
	cin.getline(dessert, ArSize1);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}

//例题4-5；
int P4_5()
{
	const int ArSize2 = 20;
	char name[ArSize2];
	char dessert[ArSize2];

	cout << "Enter your name:\n";
	cin.get(name, ArSize2).get();
	cout << "Enter your favorite dessert:\n";
	cin.get(dessert, ArSize2).get();
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}

//例题4-6；
int P4_6()
{
	cout << "What year was your house built?\n";
	int year;
	cin >> year;
	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address, 80);
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";
	return 0;
}

//例题4-7；
int P4_7()
{
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	cout << "Enter a kind of feline";
	cin >> charr1;
	cout << "Enter another kind of feline: ";
	cin >> str1;
	cout << "Here are some felines:\n";
	cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;
	cout << "The third letter in " << charr2 << " is " << charr2[2] << endl;
	ocut << "The third letter in " << str2 << " is " << str2[2] << endl;

	return 0;
}

//例题4-8；
int P4_8()
{
	string s1 = "penguin";
	string s2, s3;

	cout << "You can assign one string object to another: s2 = s1\n";
	s2 = s1;
	cout << "s1: " << s1 << ", s2: " << s2 << endl;
	cout << "You can assign a C-style string to a string object .\n";
	cout << "s2= \"buzzard\"\n";
	s2 = "buzzard";
	cout << "s2: " << s2 << endl;
	cout << "You can concatenate strings: s3 = s1 + s2\n";
	s3 = s1 + s2;
	cout << "s3: " << s3 << endl;
	cout << "You can append strings.\n";
	s1 += s2;
	cout << "s1 +=s2 yields s1 = " << s1 << endl;
	s2 += "for a day";
	cout << "s2 += \" for a day\" yields s2 = " << s2 << endl;

	return 0;
}

//例题4-9；
int P4_9() 
{
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	str1 = str2;
	strcpy(charr1, charr2);

	str1 += "paste";
	strcat(charr1, " juice");

	int len1 = str1.size();
	int len2 = strlen(charr1);

	cout << "The string " << str1 << " contains" << len1 << "characters.\n";
	cout << "The string " << charr1 << " contains " << len2 << "characters.\n";

	return 0;
}

//例题4-10；
int P4_10()
{
	char charr[20];
	string str;

	cout << " Length of string in charr before input: " << strlen(charr) << endl;
	cout << " Length of string in str before input: " << str.size() << endl;
	cout << "Enter a line of text:\n";
	cin.getline(charr, 20);
	cout << "You entered: " << charr << endl;
	cout << "Enter another line of text: \n";
	getlint(cin, str);
	cout << "You entered: " << str << endl;
	cout << "Length of string in charr after input: " << strlen(charr) << endl;
	cout << "Length of string in str after input: " << str.size() << endl;

	return 0;
}

//例题4-11；
