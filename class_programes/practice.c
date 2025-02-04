#include <stdio.h>

// Function declaration
void Message();

int main() {
    // Not calling the printMessage function
    printf("Main function executed.\n");

    Message();
    return 0;
}

// Function definition
void Message() {
    printf("This message will not be printed.\n");
}
