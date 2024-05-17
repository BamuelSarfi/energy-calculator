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
int begin() {

	int num;
	

	cout << "**WELCOME TO ENERGY CALCULATOR.**\n";
	cout << "enter '1' for kinetic energy, '2' for gravitational potential energy, and '3' for elastic potential energy.\nHit 'ESC' to escape\n";
	cout << "Enter here >>> ";
	cin >> num;


	if (num == 1) {
		
		double mass, velocity;

		cout << "enter mass(g): ";
		cin >> mass;

		cout << "enter velocity(m/s): ";
		cin >> velocity;

		kineticEnergy(mass, velocity);

		cout << "Result : " << kineticEnergy(mass, velocity) << endl;


		if (nearbyint(kineticEnergy(mass, velocity)) != kineticEnergy(mass, velocity)) {

			cout << "Rounded result: " << nearbyint(kineticEnergy(mass, velocity)) << endl;


		}
		//adding returns to check later.
		return 8;

	}
	else if (num == 2) {
		double mass, gravField, height;

		cout << "enter mass: ";
		cin >> mass;

		cout << "enter gravitational field: ";
		cin >> gravField;

		cout << "enter height: ";
		cin >> height;

		gravitationalPotential(mass, gravField, height);

		cout << "Result :" << gravitationalPotential(mass, gravField, height) << endl;

		if (gravitationalPotential(mass, gravField, height) != nearbyint(gravitationalPotential(mass, gravField, height))) {

			cout << "Rounded result: " << nearbyint(gravitationalPotential(mass, gravField, height)) << endl;

		}
		//adding returns to check later.
		return 8;

	}
	else if (num == 3) {
		double springConst, ext;
		

		cout << "enter spring constant: ";
		cin >> springConst;

		cout << "enter spring extention: ";
		cin >> ext;


		elasticPotential(springConst, ext);

		cout << "Result: " << elasticPotential(springConst, ext) << endl;


		if (elasticPotential(springConst, ext) != nearbyint(elasticPotential(springConst, ext))) {

			cout << "Rounded Result: " << nearbyint(elasticPotential(springConst, ext)) << endl;


		}
		//replace isFinish w/ return 8.
		return 8;


	}

	return 0;
}

//kinetic energy: 0.5 * m * v^2
//gpe = m * g * h
//epe = 0.5 * k * e^2

int main()
{
	
	begin();
	if (begin() == 8) {
		begin();
	}

	return 0;

}