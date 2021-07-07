#include "Color.h"

Color::Color(int r, int g, int b, int a) : r{r}, g{g}, b{b}, a{a}
{
}

Color::~Color()
{
}

int Color::GetR(void)
{
	return this->r;
}

int Color::GetG(void)
{
	return this->g;
}

int Color::GetB(void)
{
	return this->b;
}

int Color::GetA(void)
{
	return this->a;
}
