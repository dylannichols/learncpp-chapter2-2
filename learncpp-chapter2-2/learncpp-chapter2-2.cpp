// learncpp-chapter2-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "constants.h"

double distanceFallen(int seconds)
{
	double distance = myConstants::gravity * seconds * seconds / 2;
	return distance;
}


void printHeight(double distanceFallen, int seconds, double height)
{
	if (distanceFallen < height)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << height - distanceFallen << " metres.\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

double getHeight()
{
	std::cout << "Enter the height of the tower in metres: ";
	double height;
	std::cin >> height;
	return height;
}

int main()
{
	double height = getHeight();
	double distance;
	for (int i = 0; i <= 5; ++i)
	{
		distance = distanceFallen(i);
		printHeight(distance, i, height);
	}
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
