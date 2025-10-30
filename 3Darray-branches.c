/*
Name: Mwaniki Maureen Wangui 
Reg no;CT100/G/26135/25
Description:3D array Multiple branches 
*/

#include <stdio.h>

int main() {
    int hotel[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;

    // Assign random occupancy (0 or 1)
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                hotel[branch][floor][room] =rand()%2;
                totalOccupied += hotel[branch][floor][room];
            }
        }
    }

    // Display total occupied rooms
    printf("Total occupied rooms across all branches = %d\n", totalOccupied);

    return 0;
}
