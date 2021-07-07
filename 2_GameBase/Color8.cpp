#include "Color8.h"

const int Color8::MAX_VALUE {255};
const float Color8::MAX_FLOAT_VALUE {1.0f};

Color8::Color8(int r, int g, int b, int a) : Color{LimitValue(r), LimitValue(g), LimitValue(b), LimitValue (a)}
{
}

Color8::Color8(float r, float g, float b, float a)
	: Color{LimitValue(NormalizeFloatValue(r)),
	LimitValue(NormalizeFloatValue(g)),
	LimitValue(NormalizeFloatValue(b)), 
	LimitValue(NormalizeFloatValue(a))
	}
{
	
}


Color8::~Color8()
{
}

void Color8::SetColor(int r, int g, int b, int a)
{
	r = LimitValue(r);
	g = LimitValue(g);
	b = LimitValue(b);
	a = LimitValue(a);
}

void Color8::SetColor(float r, float g, float b, float a)
{
	r = NormalizeFloatValue(r);
	g = NormalizeFloatValue(g);
	b = NormalizeFloatValue(b);
	a = NormalizeFloatValue(a);
}

int Color8::LimitValue(int value)
{
	if(value > MAX_VALUE)
	{
		return MAX_VALUE;
	}
	else if(value < 0)
	{
		return 0;
	}
	
	return value;
}

int Color8::NormalizeFloatValue(float value)
{
	return LimitValue(static_cast <int>(value * static_cast <float>(MAX_VALUE)));
}




