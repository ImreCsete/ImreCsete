#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t x = 0b11001100;
    uint8_t y = 0b01010101;
	uint8_t z = x | y;

	printf("%d", z);

	// Be z equal to the bitwise and of x and y - x & y = 68

	// Check the result with printf

	// Be z equal to the bitwise or of x and y - x | y = 221

	// Check the result with printf
    return 0;
}
