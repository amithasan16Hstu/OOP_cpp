#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
// Define a class for the TrafficLight
class TrafficLight {
public:
    TrafficLight() : isRed(true) {}

    // Function to switch the traffic light to green
    void turnGreen() {
        isRed = false;
    }

    // Function to switch the traffic light to red
    void turnRed() {
        isRed = true;
    }

    // Function to check if the traffic light is currently red
    bool isRedLight() const {
        return isRed;
    }

    // Function to simulate the traffic light changing colors
    void simulate() {
        while (true) {
            this_thread::sleep_for(chrono::seconds(5)); // Simulate 5 seconds for green light
            turnRed();
            cout << "Traffic Light turned RED\n";

            this_thread::sleep_for(chrono::seconds(2)); // Simulate 2 seconds for red light
            turnGreen();
            cout << "Traffic Light turned GREEN\n";
        }
    }

private:
    bool isRed;
};

int main() {
    TrafficLight trafficLight;

    // Start the traffic light simulation in a separate thread
    std::thread simulationThread(&TrafficLight::simulate, &trafficLight);

    // Main program loop
    while (true) {
        if (trafficLight.isRedLight()) {
            std::cout << "Stop! Traffic Light is RED\n";
        } else {
            std::cout << "Go! Traffic Light is GREEN\n";
        }

        std::this_thread::sleep_for(std::chrono::seconds(1)); // Check the traffic light every 1 second
    }

    // Join the simulation thread (should never reach here)
    simulationThread.join();

    return 0;
}
