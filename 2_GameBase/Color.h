#ifndef COLOR_H
#define COLOR_H

class Color
{
public:
	Color(int r, int g, int b, int a);
	~Color();
	
	virtual void SetColor(int r, int g, int b, int a) {};
	virtual void SetColor(float r, float g, float b, float a) {};
	
	int GetR(void);
	int GetG(void);
	int GetB(void);
	int GetA(void);
	
private:
	int r;
	int g;
	int b;
	int a;

};

#endif // COLOR_H
