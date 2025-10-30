/*
Name Mwaniki Maureen Wangui
Reg no CT100/G/26135/25
Description:2D array 
*/

#include<stdio.h>



int main() {
    
    int occupancy[5][10];  
    
    //  array with random occupancy (0 = vacant, 1 = occupied)
    for(int floor = 0; floor < 5; floor++) {
        for(int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;
        }
    }

    // Display occupancy per floor
    printf("=== Hotel Occupancy Report (5 Floors, 10 Rooms Each) ===\n");
    
    for(int floor = 0; floor < 5; floor++) {
        int occupied = 0, vacant = 0;
        
        for(int room = 0; room < 10; room++) {
            if(occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d: Occupied = %d rooms, Vacant = %d rooms\n", floor + 1, occupied, vacant);
    }

    return 0;
}