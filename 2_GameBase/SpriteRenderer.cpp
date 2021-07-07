#include "SpriteRenderer.h"

SpriteRenderer::SpriteRenderer(Transform& transform, int r, int g, int b, int a) : transform {transform}, color {r, g, b, a}
{
}

SpriteRenderer::~SpriteRenderer()
{
}

