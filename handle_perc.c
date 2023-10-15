#include <stdarg.h>
#include <stddef.h>
#include "main.h"

int handle_perc(va_list lst, int *count) 
{
    (void)lst; // Unused parameter (avoid compiler warnings)

    *count += _putchar('%'); // Print '%' and increment the character count
    return 1; // Return 1 to indicate that one character has been processed

}
