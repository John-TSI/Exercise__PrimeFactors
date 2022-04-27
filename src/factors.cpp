#include<iostream>
#include<limits>
#include<vector>
#include"../include/factors.hpp"

using std::cin; using std::cout; using std::endl; using std::vector;


namespace primes
{
    bool IsPrime(int n)
    {
        for(int i=2; i<n; i++)
        {
            if(n%i == 0) { return false; }
        }
        return true;
    }


    void Factors(int num)
    {
        if(num < 0) { cout << "Ensure input is a positive integer." << endl; return; }
        
        int input = num;
        vector<int> factors = {};

        if(IsPrime(num)) { cout << num << " is a prime number." << endl; }
        else
        {
            int divisor = 2;
            while(num != 1)
            {
                while(num%divisor == 0)
                {
                    factors.push_back(divisor);
                    num /= divisor; 
                }
                divisor++;
            }

            cout << "Prime factors of " << input << ": { ";
            for(int n : factors) { cout << n << " "; }
            cout << "}" << endl;
        }
    }
}