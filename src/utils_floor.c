double
utils_floor(double x)
{
	return ((int)(x + 0x40000000) - 0x40000000);
}
