#ifndef WORLD_OBJECT
#define WORLD_OBJECT
#include <stdlib.h>

/* Any object ever.. */
class WorldObject{
public:
	WorldObject(){ type = 1; }
	~WorldObject() { }

	virtual void glow() = 0;
	unsigned char getType();

	unsigned char type;

};

#endif