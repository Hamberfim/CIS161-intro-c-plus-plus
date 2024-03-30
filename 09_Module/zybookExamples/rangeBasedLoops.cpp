/* 9.14 Range-based for loop
Range-based for loop
The range-based for loop is a for loop that iterates through each element in a vector or container. A range-based for loop is also known as a for each loop. The range-based loop declares a new variable that will be assigned with each successive element of a container, such as a vector, from the first element to the last element.

PARTICIPATION ACTIVITY
9.14.1: The range-based for loop declares a new variable and assigns the variable with each successive element of a container. */

#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<string> teamRoster;
	// Adding player names
	teamRoster.push_back("Mike");
	teamRoster.push_back("Scottie");
	teamRoster.push_back("Toni");

	cout << "Current roster: " << endl;
	 
	for (string playerName : teamRoster) {
	   cout << playerName << endl;
	}

	return 0;
}

