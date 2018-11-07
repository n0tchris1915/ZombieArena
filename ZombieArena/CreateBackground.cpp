#include "stdafx.h"
#include "ZombieArena.h"

using namespace sf;

int createBackground(VertexArray& rVA, IntRect arena)
{
	// Anything we do to rVA we are actually doing
	// to background (in the main function)
	// How big is each tile/texture
	const int TILE_SIZE = 50;
	const int TILE_TYPES = 3;
	const int VERTS_IN_QUAD = 4;

	int worldWidth = arena.width / TILE_SIZE;
	int worldHeight = arena.height / TILE_SIZE;

	// What type of primitive are we using?
	rVA.setPrimitiveType(Quads);

	// SEt the size of the vertex array
	rVA.resize(worldWidth * worldHeight * VERTS_IN_QUAD);

	// Start at the beginning of the vertex array
	int currentVertex = 0;

	return TILE_SIZE;
}