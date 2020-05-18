// C++ program to count 
// number of Dyck Paths 
// based on catalan nos.

#include<iostream> 
using namespace std; 
 
int countDyckPaths(unsigned int n) 
{ 
	int res = 1; 
	for (int i = 0; i < n; ++i) 
	{ 
		res *= (2 * n - i); 
		res /= (i + 1); 
	} 

	return res / (n+1); 
} 

// Driver Code 
int main() 
{ 
	int n = 4; 
	cout << "Number of Dyck Paths is "
		<< countDyckPaths(n); 
	return 0; 
} 
