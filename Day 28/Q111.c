#include <stdio.h>

int main() {
    int totalSeats = 50;
    int bookedSeats;

    printf("Available Seats: %d\n", totalSeats);
    printf("Enter number of seats to book: ");
    scanf("%d", &bookedSeats);

    if(bookedSeats <= totalSeats && bookedSeats > 0) {
        totalSeats -= bookedSeats;
        printf("Booking Successful\n");
        printf("Remaining Seats: %d\n", totalSeats);
    } else {
        printf("Booking Failed\n");
    }

    return 0;
}