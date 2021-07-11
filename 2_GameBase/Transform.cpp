#include "Transform.h"

const Component::Type Transform::type {Component::TRANSFORM};

Transform::Transform(const std::string& entityName, Transform::Anchor anchor, int sizeWidth, int sizeHeight, int posX, int posY)
	: entityName {entityName},
	anchor {anchor},
	sizeWidth {sizeWidth},
	sizeHeight {sizeHeight},
	posX{posX}, posY{posY}
{
	const std::pair <int, int> normalizedPos = NormalizePositionViaAnchor(posX, posY);
	this->posX = normalizedPos.first;
	this->posY = normalizedPos.second;	
}

Transform::~Transform()
{
}

const std::pair<int, int> Transform::GetSize(void)
{
	std::pair <int, int> size {sizeWidth, sizeHeight};
	return size;
}
	
const std::pair<int, int> Transform::GetPos(void)
{
	std::pair <int, int> pos {posX, posY};
	return pos;
}

void Transform::SetSize(int w, int h)
{
	sizeWidth = w;
	sizeHeight = h;
}
	
void Transform::SetPos(int x, int y)
{
	const std::pair <int, int> normalizedPos = NormalizePositionViaAnchor(x, y);
	posX = normalizedPos.first;
	posY = normalizedPos.second;	
}
	
const std::pair <int,int> Transform::NormalizePositionViaAnchor(int rawX, int rawY)
{
	std::pair <int, int> normalizedPosition {rawX, rawY};
	
	switch(anchor)
	{
		case CENTER:
		//normalizedPosition.first = rawX - sizeWidth/2;
		//normalizedPosition.second = rawY + sizeHeight/2;
		break;
	}
	
	return normalizedPosition;
}

