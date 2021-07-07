#ifndef COLOR_8_H
#define COLOR_8_H
#include "Color.h"

class Color8 : public Color
{
public:
	const static int MAX_VALUE;
	const static float MAX_FLOAT_VALUE;

	Color8(int r = MAX_VALUE, int g = MAX_VALUE, int b = MAX_VALUE, int a = MAX_VALUE);
	Color8(float r = MAX_FLOAT_VALUE, float g = MAX_FLOAT_VALUE, float b = MAX_FLOAT_VALUE, float a = MAX_FLOAT_VALUE);
	~Color8();

	virtual void SetColor(int r, int g, int b, int a) override;
	virtual void SetColor(float r, float g, float b, float a) override;
	
private:
	int LimitValue(int value);
	int NormalizeFloatValue(float value);
};

#endif // COLOR_8_H
