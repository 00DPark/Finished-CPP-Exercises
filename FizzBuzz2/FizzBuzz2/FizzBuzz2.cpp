#include "FizzBuzz2.h"
#include <iostream>
#include <string>
using namespace std;

//FizzBuzz constructor
FizzBuzz2::FizzBuzz2(int size)
{
	p = new Pair[size];
}

//FizzBuzz addPair constructor
void FizzBuzz2::addPair(string s, int x)
{
	Pair pair1(s, x);
	p[count] = pair1;
	count++;
}

//destructor
FizzBuzz2::~FizzBuzz2()
{
}
