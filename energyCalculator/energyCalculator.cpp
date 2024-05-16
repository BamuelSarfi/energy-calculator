//written by @bamuelsarfi
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double kineticEnergy(double mass, double velocity) {
	
	return 0.5 * mass * pow(velocity, 2);

}

double gravitationalPotential(double mass, double gravField, double height) {

	return mass * gravField * height;

}
double elasticPotential(double springConst, double ext) {

	return 0.5 * springConst * ext;

}

int begin(bool isFinish)
{
	int num;
	cout << "**WELCOME TO ENERGY CALCULATOR.**\n";
	cout << "enter '1' for kinetic energy, '2' for gravitational potential energy, and '3' for elastic potential energy.\n";
	cout << "Enter here >>> ";
	cin >> num;

	if (num == 1) {
		double mass, velocity;


		cout << "enter mass(g): ";
		cin >> mass;

		cout << "enter velocity(m/s): ";
		cin >> velocity;

		kineticEnergy(mass, velocity);

		cout << "\nResult : " << kineticEnergy(mass, velocity) << endl;


		if (nearbyint(kineticEnergy(mass, velocity)) != kineticEnergy(mass, velocity)) {

			cout << "Rounded result: " << nearbyint(kineticEnergy(mass, velocity)) << endl;
			isFinish = true;

		}
		else {

			isFinish = true;

		}

	}
	else if (num == 2) {
		double mass, gravField, height = NULL;


		cout << "enter mass(g): ";
		cin >> mass;

		cout << "enter gravitational field(N/kg): ";
		cin >> gravField;


		cout << "enter height(cm): ";
		cin >> height;

		gravitationalPotential(mass, gravField, height);

		cout << "\nResult :" << gravitationalPotential(mass, gravField, height) << endl;

		if (gravitationalPotential(mass, gravField, height) != nearbyint(gravitationalPotential(mass, gravField, height))) {

			cout << "Rounded result: " << nearbyint(gravitationalPotential(mass, gravField, height)) << endl;
			isFinish = true;


		}
		else {

			isFinish = true;

		}

	}
	else if (num == 3) {
		double springConst;
		double ext;


		cout << "enter spring constant(N/m): ";
		cin >> springConst;

		cout << "enter spring extention(m): ";
		cin >> ext;


		elasticPotential(springConst, ext);

		cout << "\nResult: " << elasticPotential(springConst, ext) << endl;


		if (elasticPotential(springConst, ext) != nearbyint(elasticPotential(springConst, ext))) {

			cout << "Rounded Result: " << nearbyint(elasticPotential(springConst, ext)) << endl;
			isFinish = true;

		}
		else {

			isFinish = true;

		}



	}
	else {
		cout << "Enter a number between 1 and 3";//update everytime you add a calculation. 
		return 8;
	}
}

//kinetic energy: 0.5 * m * v^2
//gpe = m * g * h
//epe = 0.5 * k * e^2
//gravitational feild strength for the earth is 9.8

int main()
{
	bool isFinish = false;
	
	while (isFinish != true) {
		begin(isFinish);
	}
	if (isFinish == true) {
		char choice = NULL;
		isFinish = false;
		cout << "would you like to do it again(y/n): ";
		cin >> choice;

		if (choice == 'y' || choice == 'Y') {
			begin(isFinish);
		}
		else if (choice == 'n' || choice == 'N') {
			cout << "Thanks for using ENERGY CALCULATOR.";
			return 7;
		}
		else {
			cout << "\nEnter either 'y' or 'n': ";
			cin >> choice;
		}

		
	}

	return 0;

}