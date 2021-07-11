#ifndef TRANSFORM_H
#define TRANSFORM_H
#include <utility>
#include <string>
#include <iostream>
#include "Component.h"

class Transform : public Component
{
public:
	enum DataChange
	{
		POS_CHANGED,
		SIZE_CHANGED
	};
	
	enum Anchor
	{
		CENTER,
		CENTER_TOP,
		CENTER_BOTTOM,
		CENTER_LEFT,
		CENTER_RIGHT,
		CORNER_TOP_LEFT,
		CORNER_TOP_RIGHT,
		CORNER_BOTTOM_LEFT,
		CORNER_BOTTOM_RIGHT
	};
	
	static const Component::Type type;
	
	Transform(const std::string& entityName, Transform::Anchor anchor = CENTER, int sizeWidth = 0, int sizeHeight = 0, int posX = 0, int = 0);
	~Transform();
	
	const std::pair<int, int> GetSize(void);
	const std::pair<int, int> GetPos(void);
	
	void SetSize(int w, int h);
	void SetPos(int x, int y);
	
private:
	const std::string& entityName;
	int anchor;
	
	int sizeWidth;
	int sizeHeight;
	
	int posX;
	int posY;
		
	const std::pair <int,int> NormalizePositionViaAnchor(int rawX, int rawY);
};

#endif // TRANSFORM_H
