#include<iostream>
#include<limits>
#include<vector>
#include"../include/factors.hpp"


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
        int input = num;
        std::vector<int> factors = {};

        if(IsPrime(num)) { std::cout << num << " is a prime number." << std::endl; }
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

            std::cout << "Prime factors of " << input << ": { ";
            for(int n : factors) { std::cout << n << " "; }
            std::cout << "}" << std::endl;
        }
    }
}