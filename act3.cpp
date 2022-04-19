/******************************************************************************
CS 325 Activity 3 Canoe
Example input
input: number of trading posts (n) and an nxn table of rental costs	R. 
	R[i][j] is the cost to rent a canoe at trding post i and return it to 
	trading post j.	R[i][i] = 0  R[i][j] = -1 if i > j. 
output: the minimium cost a list of trading posts that were stopped at. 
note: there is a newline "endl" at end of the output
Extra: If there are more than one mode list them of seperate lines. List in order the value first appear in the original list
For example:    4
                0 10 15 40
				-1 0 5 15
				-1 -1 0 8
				-1 -1 -1 0
output: 23 1 3 4
submit to Gradescope as act3.cpp
*******************************************************************************/
#include <iostream>
#include <fstream>

void printTradingPosts(int* prev, int num) {
	
}

int main() {
	int R[100][100];
	int num;
	int minCost;   // minimum cost
	int prev[100]; // back pointer to the previous post in the optimal solution

	int n;
	std::cin >> n;
    for (int i = 1; i <= n; i++)
		for(int j = 1; j<= n; j++)
			std::cin >> R[i][j];

	// find the minimum cost
	
	std::cout << minCost << std::endl;
	printTradingPosts(prev, num);
	std::cout << std::endl;
	return 1;
}
