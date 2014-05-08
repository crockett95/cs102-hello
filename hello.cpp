/**
 * This is a simple 'Hello World' program
 *
 * This program was written for Saylor's CS102 course, and adapted to run on Mac/POSIX
 *
 * @author Stephen Crocket <crockett95@gmail.com>
 */

#include <iostream>
using namespace std;

int main()
{
	cout << "Hello World" << endl;
	system("read -n1 -p ' ' key");
	return 0;
}
