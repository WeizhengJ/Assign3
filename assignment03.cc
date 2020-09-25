#include <iostream>
#include <iomanip>
#include <set>


/* Weizheng Jiang
 * z1861817
 * CSCI 340 Section 2
 *


I certify that this is my own work and where appropriate an extension 
of the starter code provided for the assignment.
*/


using namespace std;


#define NO_ITEM 16
#define ITEM_W 5


void sieve(set<int>& s, int n)
{
	//initialize the set by insert the element into the set

	for(int i = 2; i <= n; i++)
	{
		s.insert(i);
	}
	
	//the first prime number is 2, and continue to the next prime number if m*m is smaller than the last number
	//erase the number that can be divided by the prime number we set
	for(int m = 2; m * m <= n; m++)
	{
		for(int k = m; k < n; k++)
			s.erase(m*k);
	}
	
}

void print_primes(const set<int>& s)
{
	//print the element in correct form
	int line = 0;
	for(auto i = s.begin(); i != s.end(); ++i)
	{
		//print exact 16 numbers per line
		if(line % 16 == 0)
			cout << endl;
		else
		{
			cout << setw(ITEM_W) << (*i) ;
		}

		line++;

	}
}


int main()
{
	int limit;
	cin >> limit;
	set<int> s;

	//ask the user to give a upper
	cout << "Upper limit for the set of primes: :" << limit << endl;

	sieve(s,limit);

	print_primes(s);

	return 0;
}
