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
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int P4_11()
{
	inflatable guest =
	{
		"Glorious Gloria",
		1.88,
		29.99
	};

	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99
	};

	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << "!\n";

	cout << "You can have both for $";
	cout << guest.price + pal.price << "!\n";
	return 0;
}


//例题4-12；
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int P4_12()
{
	inflatable bouquet =
	{
		"sunflowers",
		0.20,
		12.49
	};
	inflatable choice;
	cout << "bouquet: " << bouquet.name << " for $ ";
	cout << bouquet.price << endl;

	choice = bouquet;
	cout << "choice: " << choice.name << " for $ ";
	cout << choice.price << endl;
	return 0;
}


//例题4-13；
struct inflatable
{
	char name[20];
	float volume;
	double price;
 };

int P4_13()
{
	inflatable guests[2] =
	{
		{"Bambi",0.5,21.99},
		{"Godzilla",2000,565.99}
	 };

	cout << "The guests " << guests[0].name << " and " << guests[1].name
		<< "\nhave a combined volume of "
		<< guests[0].volume + guests[1].volume << " cubic feet.\n";
	return 0;
}


//例题4-14；
int P4_14()
{
	int donuts = 6;
	double cups = 4.5;

	cout << "donuts value = " << donuts;
	cout << " and donuts address = " << &donuts << endl;

	cout << "cups value = " << cups;
	cout << " and cups address = " << &cups << endl;
	return 0;
}


//例题4-15；
int P4_15()
{
	int updates = 6;
	int* p_updates;
	p_updates = &updates;

	cout << "Value: updates = " << updates;
	cout << ", p_updates = " << p_updates << endl;

	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;
	return 0;
}


//例题4-16；
int P4_16()
{
	int higgens = 5;
	int* pt = &higgens;

	cout << "Value of higgens = " << higgens
		<< "; Address of higgens = " << &higgens << endl;
	cout << "Value of *pt = " << *pt
		<< "; Value of pt = " << pt << endl;
	return 0;
}


//例题4-17；
int PP4_17()
{
	int nights = 1001;
	int* pt = new int;
	*pt = 1001;

	cout << "nights value = ";
	cout << nights << ": location " << &nights << endl;
	cout << "int ";
	cout << "value = " << *pt << ": location =" << pt << endl;
	double* pd = new double;
	*pd = 10000001.0;

	cout << "double ";
	cout << "value = " << *pd << ": location = " << pd << endl;
	cout << "location of pointer pd: " << &pd << endl;
	cout << "size of pt = " << sizeof(pt);
	cout << ": size of pt = " << sizeof(pt) << endl;
	cout << "size of pd = " << sizeof pd;
	cout << ": size of *pd = " << sizeof(*pd) << endl;
	return 0;
}


//例题4-18；
int P4_18()
{
	double* p3 = new double[3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 + 1;
	cout << "Now p3[0] is " << p3[0] << " and ";
	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 - 1;
	delete[] p3;
	return 0;
}


//例题4-19；
int P4_19()
{
	double wages[3] = { 10000.0,20000.0,30000.0 };
	short stacks[3] = { 3,2,1 };

	double* pw = wages;
	short* ps = &stacks[0];

	cout << "pw = " << pw << ",pw = " << *pw << endl;
	pw = pw + 1;
	cout << "add 1 to the pw pointer:\n";
	cout << "pw = " << pw << ",*pw = " << *pw << "\n\n";
	cout << "ps = " << ps << ",*ps = " << *ps << endl;
	ps = ps + 1;
	cout << "add 1 to the ps pointer:\n";
	cout << "ps = " << ps << ",*ps = " << *ps << "\n\n";

	cout << "access two elements with array notation\n";
	cout << "stacks[0] = " << stacks[0]
		<< ",stacks[1] = " << stacks[1] << endl;
	cout << "access two elements with pointer notation\n";
	cout << "*stacks = " << *stacks
		<< ",*(stacks + 1) = " << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = size of wages array\n";
	cout << sizeof(pw) << " = size of pw pointer\n";
	return 0;
}


//例题4-20；
int P4_20()
{
	char animal[20] = "bear";
	const char* bird = "wren";
	char* ps;

	cout << animal << " and ";
	cout << bird << "\n";
    
	cout << "Enter a kind of animal: ";
	cin >> animal;

	ps = animal;
	cout << ps << "!\n";
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "After using strcpy(): \n";
	cout << ps << " at " << (int*)ps << endl;
	delete[] ps;
	return 0;

}