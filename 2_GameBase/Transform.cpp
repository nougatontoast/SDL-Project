#include "Transform.h"

Transform::Transform(Transform::Anchor anchor, float sizeWidth, float sizeHeight, float posX, float posY)
	:  anchor {anchor}, sizeWidth {sizeWidth}, sizeHeight {sizeHeight}, posX{posX}, posY{posY}
{
	const std::pair <float, float> normalizedPos = NormalizePositionViaAnchor(this->posX, this->posY);
	this->posX = normalizedPos.first;
	this->posY = normalizedPos.second;
}

Transform::~Transform()
{
}

const std::pair<float, float> Transform::GetSize(void)
{
	std::pair <float, float> size {sizeWidth, sizeHeight};
	return size;
}
	
const std::pair<float, float> Transform::GetPos(void)
{
	std::pair <float, float> pos {posX, posY};
	return pos;
}

void Transform::SetSize(float w, float h)
{
	sizeWidth = w;
	sizeHeight = h;
}
	
void Transform::SetPos(float x, float y)
{
	const std::pair <float, float> normalizedPos = NormalizePositionViaAnchor(x, y);
	posX = normalizedPos.first;
	posY = normalizedPos.second;

}
	
const std::pair <float,float> Transform::NormalizePositionViaAnchor(float rawX, float rawY)
{
	std::pair <float, float> normalizedPosition {rawX, rawY};
	
	switch(anchor)
	{
		case CENTER:
		normalizedPosition.first = rawX - sizeWidth/2;
		normalizedPosition.second = rawY + sizeHeight/2;
		break;
	}
	
	return normalizedPosition;
}

