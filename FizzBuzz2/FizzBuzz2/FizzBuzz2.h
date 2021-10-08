#pragma once
#include <iostream>
#include <string>
using namespace std;
class Pair
{
public:
	string s;
	int x;
	Pair()
	{

	}
	Pair(string str, int num)
	{
		s = str;
		x = num;
	}
};

class FizzBuzz2
{
public:
	FizzBuzz2(int size);
	//void pairs();
	void addPair(string str, int num);
	Pair* p;
	
	~FizzBuzz2();
private:
	int count = 0;
	
};



