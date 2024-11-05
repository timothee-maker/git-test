#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include "include/ft_printf.h"

/* you must provide this function somewhere */

char hex_digit(int v) {
	if (v >= 0 && v < 10)
		return '0' + v;
	else
		return 'a' + v - 10; // <-- Here
}

void print_address_hex(void* p0) {
	int i;
	uintptr_t p = (uintptr_t)p0;

	write(1, "0", 1);
	write(1, "x", 1);
	for(i = (sizeof(p) << 3) - 4; i>=0; i -= 4) {
		printf("%c", hex_digit((p >> i) & 0xf));
	}
}

int	main()
{
	char	*str = "Je suis ALAWARBAR";
	print_address_hex(str);
	printf("\n%p\n", str);
	uintptr_t ptr = (uintptr_t)str;
	ft_putnbrbase_fd(ptr, "0123456789abcdef", 1);
	printf("\n");
}
