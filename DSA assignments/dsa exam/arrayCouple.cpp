#include <iostream>
#include <string>
#include <map>
#include <iterator>
#include <sstream>
using namespace std;

/*
one approach is to traverse the array
at each iteration store the pairs into a hash map
when iterating check if the new pair is a reversed of a pair stored in our hash map
if true, than remove the stored pair
else add the new pair to our table
*/
string ArrayCouples(int arr[], int size) 
{
	map <int, int> table;

	// traverse our array
	for (int x = 0; x < size - 1; x += 2)
	{
		bool found = false;

		// section to analyze our hash table
		for (map<int, int>::iterator y = table.begin(); y != table.end(); y++)
		{
			// condition to check if pair has a reverse
			if ((y->first == arr[x] && y->second == arr[x + 1]) || (y->first == arr[x + 1] && y->second == arr[x]))
			{
				// remove the stored pair from our table
				table.erase(y->first);
				found = true;
				break;
			}
		}

		if (!found)
		{
			// adding to our table if the pair is new
			table[arr[x]] = arr[x + 1];
		}
	}

	// checking result based on the hash table
	if (table.empty())
	{
		return "yes";
	}

	// converting to string
	ostringstream convert;
	for (map<int, int>::iterator x = table.begin(); x != table.end(); x)
	{
		convert << x->first << "," << x->second;
		x++;

		if (x != table.end())
		{
			convert << ",";
		}
	}

	return convert.str();
}

int main() 
{
	// int A[] = { 4, 5, 1, 4, 5, 4, 4, 1 };
	// int B[] = { 6, 2, 2, 6, 5, 14, 14, 1 };
	int C[] = { 2, 1, 1, 2, 3, 3 };
	// int D[] = { 5, 4, 6, 7, 7, 6, 4, 5 };

	// cout << ArrayCouples(A, sizeof(A)/sizeof(A[0])) << endl; // yes
	// cout << ArrayCouples(B, sizeof(B) / sizeof(B[0])) << endl; // 5,14,14,1
	cout << ArrayCouples(C, sizeof(C) / sizeof(C[0])) << endl; // 3,3
	// cout << ArrayCouples(D, sizeof(D) / sizeof(D[0])) << endl; // yes
	return 0;

}