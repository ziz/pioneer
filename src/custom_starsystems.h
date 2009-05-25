#ifndef _CUSTOM_STARSYSTEMS_H
#define _CUSTOM_STARSYSTEMS_H

#include "StarSystem.h"
#include "fixed.h"

struct CustomSBody {
	const char *name; // null to end system
	SBody::BodyType type;
	int primaryIdx;  // -1 for primary
	fixed radius; // in earth radii for planets, sol radii for stars
	fixed mass; // earth masses or sol masses
	int averageTemp; // kelvin
	fixed semiMajorAxis; // in AUs
	fixed eccentricity;
	float inclination; // radians
	fixed rotationPeriod; // in days
	int econType; // StarSystem.cpp enum ECON_XXX
	const char *heightMapFilename;
};

struct CustomSystem {
	const char *name;
	const CustomSBody *sbodies; // 0 to let system be random
	SBody::BodyType primaryType[4];
	int sectorX, sectorY;
	vector3f pos;
	Uint32 seed;
	const char *shortDesc;
	const char *longDesc;
};

extern const CustomSystem custom_systems[];

#endif /* _CUSTOM_STARSYSTEMS_H */
