#include <iostream>
#include <cmath>

const double EulerConstant = std::exp(1.0);

double sigmoidFunc(double x) {
    return 1 / (1 + std::pow(EulerConstant, -x));
}

double tanhFunc(double x) {
    return (std::pow(EulerConstant, x) - std::pow(EulerConstant, -x)) / 
           (std::pow(EulerConstant, x) + std::pow(EulerConstant, -x));
}

double softplusFunc(double x) {
    return std::log(1 + std::pow(EulerConstant, x));
}

int main() {
    double x;
    std::cout << "Write a value for x: ";
    std::cin >> x;

    std::cout << "Sigmoid: " << sigmoidFunc(x) << "\n";
    std::cout << "Softplus: " << softplusFunc(x) << "\n";
    std::cout << "Tanh: " << tanhFunc(x) << "\n";

    return 0;
}
