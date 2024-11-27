#include <stdio.h>
#include <string.h>

// Define a structure to represent a bike

// written for a client who services bikes 
// A logbook of service history --> Table data structure e.g. array
struct Bike {
    char type[50];         // Type of bike (e.g., road, electric, mountain)
    int bikeID;            // Unique bike ID
    char ownerName[50];    // Name of the bike owner
    char repairService[100]; // Description of repair service
    float repairCost;      // Cost of the repair service
};

// Function to calculate total repair cost
float calculateTotalRepairCost(struct Bike bikes[], int size) {
    float totalCost = 0.0;
    for (int i = 0; i < size; i++) {
        totalCost += bikes[i].repairCost;
    }
    return totalCost;
}

// Function to display bike repair details
// inside this function we call the structure bike
// . 
void displayBikeDetails(struct Bike bike) {
    printf("Bike ID: %d\n", bike.bikeID);
    printf("Bike Type: %s\n", bike.type);
    printf("Owner: %s\n", bike.ownerName);
    printf("Repair Service: %s\n", bike.repairService);
    printf("Repair Cost: RMB %.2f\n", bike.repairCost);
}

int main() {
    // Create an array of Bike structures (3 bikes for example)
    struct Bike repairShop[3] = {
        {"road", 101, "Daichen Liu", "Gear Indexing", 50.0},
        {"mountain", 102, "Ali Baba", "Brake Adjustment", 40.0},
        {"electric", 103, "Queen of the mountains", "Replace Battery", 300.0}
    };

    // Display all bike repair details
    printf("Bike Repair Shop Details:\n");
    for (int i = 0; i < 3; i++) {
        displayBikeDetails(repairShop[i]);
        printf("\n");
    }

    // Calculate and display the total repair cost for all bikes
    float totalRepairCost = calculateTotalRepairCost(repairShop, 3);
    printf("Total Repair Cost for All Bikes: RMB %.2f\n", totalRepairCost);

    return 0;
}