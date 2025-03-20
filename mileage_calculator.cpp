#include <iostream>
using namespace std;

double calculateMileage(double speed, double time, double fuelConsumed) {
    double distance = speed * time;
    return distance / fuelConsumed;
}

double calculateRequiredSpeed(double distance, double time) {
    return distance / time;
}

double calculateExpectedTime(double startTime, double distance, double speed) {
    return startTime + (distance / speed);
}

int main() {
    double speed, time, fuelConsumed, distance, startTime;

    cout << "Enter the speed of the bike (in km/h): ";
    cin >> speed;
    cout << "Enter the time taken to reach the destination (in hours): ";
    cin >> time;
    cout << "Enter the amount of fuel consumed (in liters): ";
    cin >> fuelConsumed;
    cout << "Enter the total distance to the destination (in km): ";
    cin >> distance;
    cout << "Enter the time the journey started (in hours, 24-hour format): ";
    cin >> startTime;

    if (fuelConsumed <= 0 || time <= 0 || speed <= 0 || distance <= 0) {
        cout << "Fuel consumption, time, speed, and distance must be greater than zero." << endl;
        return 1;
    }

    double mileage = calculateMileage(speed, time, fuelConsumed);
    double requiredSpeed = calculateRequiredSpeed(distance, time);
    double expectedArrivalTime = calculateExpectedTime(startTime, distance, speed);

    cout << "The bike's mileage is: " << mileage << " km/l" << endl;
    cout << "The required speed to reach the destination in time is: " << requiredSpeed << " km/h" << endl;
    cout << "The expected time to reach the destination is: " << expectedArrivalTime << " hours (24-hour format)" << endl;

    return 0;
}
