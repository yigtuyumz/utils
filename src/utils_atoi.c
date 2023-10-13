#include "../include/utils.h"

int
utils_atoi(const char *nbr)
{
	/* ilk karakter - ise negatif sonuc dondurur. */
	/* ilk karakter + ise pozitif sonuc dondurur. */
	/* error durumunda 0 donduruyor. */

	int minus_count = 0;
	int return_value = 0;

    while (((*nbr < 48)                          || \
            (*nbr > 57)) && (utils_isspace(*nbr) || \
            (*nbr == '-')                        || \
            (*nbr == '+'))) {
                if (*nbr == '-') {
                    minus_count++;
                } else if (*nbr == '+') {
                    minus_count--;
                }
                nbr++;
    }

	while (*(nbr) && (*(nbr) >= 48 && *(nbr) <= 57)) {
		return_value = (return_value * 10) + (*nbr - 48);
		nbr++;
	}

	if (minus_count > 0) {
		return (-return_value);
	}
	return (return_value);
}