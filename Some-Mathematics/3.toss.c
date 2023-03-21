#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // seed the random number generator with current time
    int result = rand() % 2; // generate a random number between 0 and 1
    if (result == 0) {
        printf("Heads!\n");
    } else {
        printf("Tails!\n");
    }
    return 0;
}