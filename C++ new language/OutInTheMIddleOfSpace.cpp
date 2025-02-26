// OutInTheMIddleOfSpace.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>


// Function to convert Cartesian to Spherical
void cartesian_to_spherical(double x, double y, double z, double& rvar, double& theta, double& phi) {
    // Calculate r (radial distance)
    rvar = sqrt(x * x + y * y + z * z);

    // Calculate theta (azimuthal angle)
    theta = atan2(y, x);  // atan2 handles division by zero cases

    // Calculate phi (polar angle)
    phi = acos(z / rvar);
}

int main() {
    // Example input coordinates 
    double c1;
    double c2;
    double c3;

    // Variables to store spherical coordinates
    double rvar, theta, phi;

    int choice;
    std::cout << "Welcome to the Point Conversion Program!\n\n";
    std::cout << "Do you want to enter your coordinate in: \n\n";
    std::cout << "(1) Spherical Coordinates\n\n";
    std::cout << "(2) Cartesian Coordinates\n\n";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "\n\nEnter your coordinate 1:\n\n";
        std::cin >> c1;
        std::cout << "\n\nEnter your coordinate 2:\n\n";
        std::cin >> c2;
        std::cout << "\n\nEnter your coordinate 3:\n\n";
        std::cin >> c3;

    // Call the function to convert Cartesian to spherical
        cartesian_to_spherical(c1, c2, c3, rvar, theta, phi);

        std::cout << "Cartesian coordinates: " << "x: " << c1 << ", y: " << c2 << ", z: " << c3 << "\n"; 
        std::cout << "Coordinate: (" << c1 << ", " << c2 << ", " << c3 << ")"; 

        std::cout << "Spherical coordinates: " << "r: " << sqrt(c1 * c1 + c2 * c2 + c3 * c3) << "theta: " << atan2(c2, c1) << "phi: " << acos(c3 / sqrt(c1 * c1 + c2 * c2 + c3 * c3)) << "\n";
        std::cout << "Coordinate: (" << sqrt(c1 * c1 + c2 * c2 + c3 * c3) << ", " << atan2(c2, c1) << ", " << acos(c3 / sqrt(c1 * c1 + c2 * c2 + c3 * c3)) << ")";
    }
    else if (choice == 2) {
        std::cout << "\n\nEnter your coordinate 1:\n\n";
        std::cin >> c1;
        std::cout << "\n\nEnter your coordinate 2:\n\n";
        std::cin >> c2;
        std::cout << "\n\nEnter your coordinate 3:\n\n";
        std::cin >> c3;

        // Call the function to convert Cartesian to spherical
        cartesian_to_spherical(c1, c2, c3, rvar, theta, phi);

        std::cout << "Cartesian coordinates: " << "x: " << c1 << ", y: " << c2 << ", z: " << c3 << "\n";
        std::cout << "Coordinate: (" << c1 << ", " << c2 << ", " << c3 << ")";

        std::cout << "Spherical coordinates: " << "r: " << sqrt(c1 * c1 + c2 * c2 + c3 * c3) << "theta: " << atan2(c2, c1) << "phi: " << acos(c3 / sqrt(c1 * c1 + c2 * c2 + c3 * c3)) << "\n";
        std::cout << "Coordinate: (" << sqrt(c1 * c1 + c2 * c2 + c3 * c3) << ", " << atan2(c2, c1) << ", " << acos(c3 / sqrt(c1 * c1 + c2 * c2 + c3 * c3)) << ")";
    }
  



    return 0;
}


