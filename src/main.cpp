#include<iostream>
#include<string>
#include<algorithm>
#include<limits>
#include"../include/factors.hpp"

using std::cin; using std::cout; using std::endl; using std::string;


// --- prototypes ---
float GetInput();


int main()
{
	int num = -1;
	while(num != 0)
	{
		num = GetInput();
		if(num != 0) { primes::Factors(num); }  
	}

	return 0;
}


// --- definitions ---
float GetInput()
{
	float req = -1;
	cout << "\nEnter a positive integer to compute its prime factors (enter 0 to quit):" << endl;
	cout << "> ";
	cin >> req;
	cout << endl;

/* 	string str = std::to_string(req);
	str.erase
	(
		std::remove_if(str.begin(), str.end(), [](char c) { return !std::isdigit(c); }),
    	str.end()
	);
	int num = std::stoi(str); 
	return num; */

	if(cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		req = -1;
		return req;
	} 
	return req;
}