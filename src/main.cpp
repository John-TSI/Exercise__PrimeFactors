#include<iostream>
#include<string>
#include<limits>
#include"../include/factors.hpp"


// --- prototypes ---
int GetInput();


// --- main ---
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
	std::string req = "";
	bool validInput = false;
	while(!validInput) 
	{
		validInput = true;
		std::cout << "\nEnter a positive integer to compute its prime factors (enter 0 to quit):\n> ";
		std::cin >> req; 
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << std::endl;

		for(char c : req)
		{
			if(!isdigit(c)) { validInput = false; break; }
		}

		if(!validInput) { std::cout << "Ensure input is a non-negative integer." << std::endl; }
	}
	return (validInput) ? stoi(req) : -1;
}