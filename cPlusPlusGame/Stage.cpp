#include "Stage.h"
#include "DoubleBuffer.h"

void Stage::Init()
{
}
void Stage::Update()
{
	DoubleBuffer::Instance()->WriteBuffer(10, 10, "STAGE", COLOR::LIGHTBLUE);
}