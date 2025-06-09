#include "main.h"

/**
 * int _isupper - checks for upper case
 * @c: character to be checked
 * return : 1 if c is upper case and 0 if  otherwise
 */

 int _isupper(int c)
 {
    if (c >= 'A' && c <= 'Z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
 }
