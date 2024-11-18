#include <iostream>
#include <iomanip> // For std::setprecision

// Function to calculate BMI
double calculateBMI(double weight, double height) {
    return weight / (height * height);
}

int main() {
    double weight, height, bmi;

    // User input
    std::cout << "Welcome to the BMI Calculator!" << std::endl;
    std::cout << "Please enter your weight in kilograms: ";
    std::cin >> weight;
    std::cout << "Please enter your height in meters: ";
    std::cin >> height;

    // Calculate BMI
    bmi = calculateBMI(weight, height);

    // Output the result
    std::cout << std::fixed << std::setprecision(2); // Set precision for output
    std::cout << "Your BMI is: " << bmi << std::endl;

    // Provide feedback based on BMI value
    if (bmi < 18.5) {
        std::cout << "You are underweight." << std::endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        std::cout << "You have a normal weight." << std::endl;
    } else if (bmi >= 25 && bmi < 29.9) {
        std::cout << "You are overweight." << std::endl;
    } else {
        std::cout << "You are obese." << std::endl;
    }

    return 0;
}
