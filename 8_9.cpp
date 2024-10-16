#include <iostream>
#include <string>

// Base class for all vehicles
class Vehicle {
public:
    Vehicle(const std::string& make, const std::string& model, int year, double price)
        : make(make), model(model), year(year), price(price) {}

    virtual void displayDetails() const {
        std::cout << "Make: " << make << "\n";
        std::cout << "Model: " << model << "\n";
        std::cout << "Year: " << year << "\n";
        std::cout << "Price: $" << price << "\n";
    }

    virtual ~Vehicle() {}

private:
    std::string make;
    std::string model;
    int year;
    double price;
};

// Derived class for two-wheelers
class TwoWheeler : public Vehicle {
public:
    TwoWheeler(const std::string& make, const std::string& model, int year, double price, const std::string& type)
        : Vehicle(make, model, year, price), type(type) {}

    void displayDetails() const override {
        Vehicle::displayDetails();
        std::cout << "Type: " << type << " Two-Wheeler\n";
    }

private:
    std::string type; // Manual, Electric, or Automatic
};

// Derived class for three-wheelers
class ThreeWheeler : public Vehicle {
public:
    ThreeWheeler(const std::string& make, const std::string& model, int year, double price, const std::string& type)
        : Vehicle(make, model, year, price), type(type) {}

    void displayDetails() const override {
        Vehicle::displayDetails();
        std::cout << "Type: " << type << " Three-Wheeler\n";
    }

private:
    std::string type; // Manual, Electric, or Automatic
};

// Derived class for four-wheelers
class FourWheeler : public Vehicle {
public:
    FourWheeler(const std::string& make, const std::string& model, int year, double price)
        : Vehicle(make, model, year, price) {}

    void displayDetails() const override {
        Vehicle::displayDetails();
        std::cout << "Type: Four-Wheeler (Automatic)\n";
    }
};

int main() {
    TwoWheeler twoWheeler("Honda", "CBR 250R", 2022, 5500.0, "Manual");
    ThreeWheeler threeWheeler("Piaggio", "Ape", 2021, 3000.0, "Electric");
    FourWheeler fourWheeler("Toyota", "Camry", 2023, 28000.0);

    twoWheeler.displayDetails();
    std::cout << "\n";

    threeWheeler.displayDetails();
    std::cout << "\n";

    fourWheeler.displayDetails();
    std::cout << "\n";

    return 0;
}
