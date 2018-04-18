// MonteCarlo_Pi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Simulation.h"
using namespace std;

int main()
{
	//long iterations;
	//cout << "Enter number of iterations: ";
	//cin >> iterations;
	Simulation sim(100000000);
	double result = sim.start();
	cout << "After " << 100000000 << " iterations approximation of PI = " << result << endl;
	system("pause");
}

