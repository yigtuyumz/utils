#include "../include/utils.h"

/*
 * Eger a isaretcisi ile gosterilen string ifadesinin icerisindeki her bir
 * karakter, b isaretcisi ile gosterilen string ifadesinin icerisindeki
 * karaklerler ile sirasiyla esit ise 1, degil ise 0 dondurur.
 */
int
utils_strcmp(const char *a, const char *b)
{
	size_t i = 0;
	while (*(a + i) == *(b + i) && \
			(*(a + i) != '\0' || *(b + i) != '\0')) {
		i++;
	}
	
	if (*(a + i) == '\0') {
		return (1);
	}
	return (0);
}
