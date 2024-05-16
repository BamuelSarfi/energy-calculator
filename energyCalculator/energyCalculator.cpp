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

//kinetic energy: 0.5 * m * v^2
//gpe = m * g * h
//epe = 0.5 * k * e^2

int main()
{
	int num;
	bool isFinish = false;

	cout << "**WELCOME TO ENERGY CALCULATOR.**\n";
	cout << "enter '1' for kinetic energy, '2' for gravitational potential energy, and '3' for elastic potential energy.\n";
	cout << "Enter here >>> ";
	cin >> num;

	if (num == 1) {
		double mass, velocity;
		bool isFinish;

		cout << "enter mass(g): ";
		cin >> mass;

		cout << "enter velocity(m/s): ";
		cin >> velocity;

		kineticEnergy(mass, velocity);

		cout << "Result : " << kineticEnergy(mass, velocity) << endl;


		if (nearbyint(kineticEnergy(mass, velocity)) != kineticEnergy(mass, velocity)) {

			cout << "Rounded result: " << nearbyint(kineticEnergy(mass, velocity));
			isFinish = true;

		}
		else {

			isFinish = true;

		}

	}
	else if (num == 2) {
		double mass, gravField, height;
		bool isFinish;

		cout << "enter mass: ";
		cin >> mass;

		cout << "enter gravitational field: ";
		cin >> gravField;

		cout << "enter height: ";
		cin >> height;

		gravitationalPotential(mass, gravField, height);

		cout << "Result :" << gravitationalPotential(mass, gravField, height) << endl;

		if (gravitationalPotential(mass, gravField, height) != nearbyint(gravitationalPotential(mass, gravField, height))) {

			cout << "Rounded result: " << nearbyint(gravitationalPotential(mass, gravField, height));
			isFinish = true;


		}
		else {

			isFinish = true;

		}

	}
	else if (num == 3) {
		double springConst;
		double ext;
		bool isFinish;

		cout << "enter spring constant: ";
		cin >> springConst;

		cout << "enter spring extention: ";
		cin >> ext;


		elasticPotential(springConst, ext);

		cout << "Result: " << elasticPotential(springConst, ext) << endl;


		if (elasticPotential(springConst, ext) != nearbyint(elasticPotential(springConst, ext))) {

			cout << "Rounded Result: " << nearbyint(elasticPotential(springConst, ext));
			isFinish = true;

		}
		else {

			isFinish = true;

		}



	}


	if (isFinish == true) {

		cout << "tick";
		isFinish = false;
		return 8;

	}

	return 0;

}