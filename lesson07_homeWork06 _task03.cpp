
#include <iostream>

struct HouseOwnership {
	std::string rented;
    std::string typeOfPropertyOwnership;
	std::string mortgage;
	std::string underArrest;
};

struct House {
	std::string type;
	double totalFloorArea;
	double totalLivingArea;
	int numberOfStoreys;
	int numberOfBedrooms;
	int numberOfBathrooms;
	int builtYear;
	std::string heating;
	int parkingSpaces;
	int price;
	HouseOwnership ownership;

};

int main()
{
	
	House cheapHouse;
	cheapHouse.type = "single family";
	cheapHouse.totalFloorArea = 200;
	cheapHouse.totalLivingArea = 150;
	cheapHouse.numberOfStoreys = 2;
	cheapHouse.numberOfBedrooms = 2;
	cheapHouse.numberOfBathrooms = 2;
	cheapHouse.builtYear = 2001;
	cheapHouse.heating = "central";
	cheapHouse.parkingSpaces = 2;
	cheapHouse.price = 25000;
	cheapHouse.ownership.rented = "No";
	cheapHouse.ownership.typeOfPropertyOwnership = "Joint ownership";
	cheapHouse.ownership.mortgage = "No";
	cheapHouse.ownership.underArrest = "No";

	std::cout << "Average properties of cheap house: " << std::endl;

	std::cout << "Type of house: " << cheapHouse.type << '\n' <<
		"Total floor area: " << cheapHouse.totalFloorArea << '\n' <<
		"Total living area: " << cheapHouse.totalLivingArea << '\n' <<
		"Number of storeys: " << cheapHouse.numberOfStoreys << '\n' <<
		"Number of bedrooms: " << cheapHouse.numberOfBedrooms << '\n' <<
		"Number of bathrooms: " << cheapHouse.numberOfBathrooms << '\n' <<
		"Year of built: " << cheapHouse.builtYear << '\n' <<
		"Avaliable heating: " << cheapHouse.heating << '\n' <<
		"Parking spaces: " << cheapHouse.parkingSpaces << '\n' <<
		"Price: " << cheapHouse.price << " USD\n" <<
		"Rented house: " << cheapHouse.ownership.rented << '\n' <<
		"Type of property ownership: " << cheapHouse.ownership.typeOfPropertyOwnership << '\n' <<
		"Mortgage: " << cheapHouse.ownership.mortgage << '\n' <<
		"Under arrest: " << cheapHouse.ownership.underArrest << std::endl;

	return 0;
}




