#include<iostream>
#include<string>
#include<algorithm>
#include<limits>
#include"../include/factors.hpp"

using std::cin; using std::cout; using std::endl; using std::string;


// --- prototypes ---
int GetInput();
bool IsDigits(string&);


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
int GetInput()
{
	int req = -1;
	cout << "\nEnter a positive integer to compute its prime factors (enter 0 to quit):" << endl;
	cout << "> ";
	cin >> req;
	cout << endl;

	string str = std::to_string(req);
	if(!IsDigits(str))
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		req = -1;
		return req;
	}

	if(cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		req = -1;
		return req;
	} 
	//return req;

	cout << str << endl;
	return req;
}


bool IsDigits(string& str)
{
	str.erase(remove(str.begin(), str.end(), '.'), str.end());
	return std::all_of(str.begin(), str.end(), ::isdigit);
}