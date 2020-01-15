/*
第二章例题
*/

#include <iostream>
#include <cmath>		
using namespace std;



//例题2-1；
int P2_1()
{
	cout << "Come up and C++ me some time.";
	cout << endl;
	cout << "You won't regret it!" << endl;
	return 0;
}

//例题2-2；
int P2_2()
{


	int carrots;

	carrots = 25;
	cout << "I have";
	cout << carrots;
	cout << "carrots";
	cout << endl;
	carrots = carrots - 1;
	cout << "Crunch, crunch. Now I have " << carrots << "carrots." << endl;
	return 0;
}

//例题2-3；
int P2_3()
{
	int carrots;

	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	cout << "Here are two more.";
	carrots = carrots + 2;
	cout << "Now you have " << carrots << "carrots." << endl;
	return 0;
}

//例题P2-4；
int P2_4()
{
	double area;
	cout << "Enter the floor area, in square feet, of your home:";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "That's the equivalent of a square " << side
	<< " feet to the side." << endl;
	cout << "How fascinating!" << endl;
	return 0;
}

//例题P2-5；
void simon(int);
int P2_5()
{
	simon(3);
	cout << "Pick an integer:";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;
	return 0;
}
void simon(int n)
{
	using namespace std;
	cout << "Simon says touch your toes " << n << " times." << endl;
}


//例题P2-6；
int stonetolb(int);
int P2_6() 
{
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << "stone = ";
	cout << pounds << "pounds." << endl;
	return 0;
}
int stonetolb(int sts) 
{
	return 14 * sts;
}
