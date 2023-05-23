#include <iostream>

int main() {

	//My Dog's age
	int dog_age = 6;
	int early_years;
	int later_years;
	int human_years;
	// The first two years
	early_years = 21;
	// Later years is 4 human years
	later_years = (dog_age - 2) * 4;

	human_years = early_years + later_years;


	std::cout << "My name is Snoopy! Ruff ruff, i am " << human_years << " years old in human years/n";

}