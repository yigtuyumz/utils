double
utils_floor(double x)
{
    return ((int)(x + 0x40000000) - 0x40000000);
}

int
utils_constrain(int val, int min, int max)
{
    if (val <= min) {
        return (min);
    } else if (val >= max) {
        return (max);
    }

    return (val);
}

int
utils_sq(void *nb)
{
    return (*((int *) nb) * *((int *) nb));
}
