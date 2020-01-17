//第四章例题

#include <iostream>
#include <cstring>
using namespace std;

//例题3-1；
int P3_1()
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



