#include <iostream>
#include <Windows.h>
#include <string>
#include <map>
#include "FizzBuzz2.h"

using namespace std;

int main()
{
	//initializes size of pairs that are added
	int size = 4;

	//creates FizzBuzz object with size
	FizzBuzz2 f(size);

	//calls addPair method
	f.addPair("Fizz", 3);
	f.addPair("Buzz", 5);
	f.addPair("Bizz", 13);
	f.addPair("Fuzz", 23);

	//print string
	string output= "";

	//for loop that compares pair integer to current i values
	for (int i = 1; i < 101; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i % f.p[j].x == 0)
			{
				output.append(f.p[j].s);
			}
		}
		if (output == "")
		{
			output.append(to_string(i));
		}
		//prints final value
		cout << output << endl;

		//resets print string
		output = "";
	}
	system("pause");
}