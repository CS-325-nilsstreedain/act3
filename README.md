# Activity 3
You may work in groups with up to 3 students. When submitting solutions in Gradescope select a page 
for each problem and the students in your group.

## Written: (5 pts)  
**Canoe Rental Problem:** There are n trading posts numbered 1 to n as you travel downstream.  At any trading post i you can rent a canoe to be returned at any of the downstream trading posts j, where j >= i.  
You are given an array R[i, j] defining the costs of a canoe which is picked up at post i and dropped off at post j,  for 1 ≤ i , j ≤ n.  Assume that R[i,i] = 0 and and R[i,j] = -1 if i > j.  Your task is to determine a sequence of rentals which start at post 1 and end at post n, and that has the minimum total cost.  
1. Give a written description and pseudocode for a DP algorithm to compute the cost of the cheapest sequence of canoe rentals from trading post 1 to n. Give the recursive formula you used to fill in the table or array.
2. Give a written description and pseudocode for code to print the sequence of trading posts visited.
3. What is the running time of your algorithms to find the minimum cost and to find the sequence of trading posts?

## Code: (10 pts)  
Implement your algorithms for the Canoe Rental Problem in C++.  The test cases have the following structure
Input:
```
4
0 10 15 40
-1 0 5 15
-1 -1 0 8
-1 -1 -1 0
```

Output:
```
23 1 3 4
```

where Input is number of trading posts, n, followed by an nxn table of rental costs R.  R[i][j] is the cost to rent a canoe at trding post i and return it to trading post j. R[i][i] = 0  R[i][j] = -1 if i > j.

Output the minimium cost and a list of trading posts that were stopped at.

You can use the code template 3 provide.  The name of file you submit to Gradescope must be ***act3.cpp***.
You may submit multiple times.  Select all group member each time you submit and include the names of the group member in your comments.
