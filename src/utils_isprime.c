int
utils_isprime(unsigned int nb)
{
    if (nb <= 1) {
        return (0);
    }

    if (nb <= 3) {
        return (1);
    }

    if (nb % 2 == 0 || nb % 3 == 0) {
        return (0);
    }

    unsigned int i = 5;

    while ((i * i) <= nb) {
        if (((nb % i) == 0) || (nb % (i + 2) == 0)) {
            return (0);
        }

        i += 6;
    }

    return (1);
}

