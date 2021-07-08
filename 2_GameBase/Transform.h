#ifndef TRANSFORM_H
#define TRANSFORM_H
#include <utility>
#include <string>

class Transform
{
public:
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
	
	Transform(std::string entityName, Transform::Anchor anchor = CENTER, float sizeWidth = 0.0f, float sizeHeight = 0.0f, float posX = 0.0f, float posY = 0.0f);
	~Transform();
	
	const std::pair<float, float> GetSize(void);
	const std::pair<float, float> GetPos(void);
	
	void SetSize(float w, float h);
	void SetPos(float x, float y);
	
private:
	const std::string entityName;
	int anchor;
	
	float sizeWidth;
	float sizeHeight;
	
	float posX;
	float posY;
	
	const std::pair <float,float> NormalizePositionViaAnchor(float rawX, float rawY);
};

#endif // TRANSFORM_H
