//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: defines constants to use for the materialsystem and shaderapi
// SetxxxRenderingParameter functions
//
// $NoKeywords: $
//
//===========================================================================//

#ifndef RENDERPARM_H
#define RENDERPARM_H

#ifndef _WIN32
#pragma once
#endif


enum RenderParamVector_t
{
	VECTOR_RENDERPARM_HMDWARP_LEFT_CENTRE = 0,
	VECTOR_RENDERPARM_HMDWARP_LEFT_COEFF012,
	VECTOR_RENDERPARM_HMDWARP_LEFT_COEFF34_RED_OFFSET,
	VECTOR_RENDERPARM_HMDWARP_RIGHT_CENTRE,
	VECTOR_RENDERPARM_HMDWARP_RIGHT_COEFF012,
	VECTOR_RENDERPARM_HMDWARP_RIGHT_COEFF34_BLUE_OFFSET,
	VECTOR_RENDERPARM_HMDWARP_GROW_OUTIN,
	VECTOR_RENDERPARM_HMDWARP_GROW_ABOVEBELOW,
	VECTOR_RENDERPARM_HMDWARP_ASPECT,
	INT_RENDERPARM_DISTORTION_TYPE,

	MAX_VECTOR_RENDER_PARMS = 20
};

// GSTRINGMIGRATION
enum RenderParamVectorGstring_t
{
	VECTOR_RENDERPARM_GSTRING_CASCADED_FORWARD = 0,

	VECTOR_RENDERPARM_GSTRING_CASCADED_AMBIENT_MIN,
	VECTOR_RENDERPARM_GSTRING_CASCADED_AMBIENT_DELTA,

	VECTOR_RENDERPARM_GSTRING_CASCADED_STEP,

	MAX_VECTOR_RENDER_PARMS_GSTRING = MAX_VECTOR_RENDER_PARMS
};
// END GSTRINGMIGRATION

#define MAX_FLOAT_RENDER_PARMS 20

enum RenderParamInt_t
{
	INT_RENDERPARM_ENABLE_FIXED_LIGHTING = 0,
	INT_RENDERPARM_MORPH_ACCUMULATOR_X_OFFSET,
	INT_RENDERPARM_MORPH_ACCUMULATOR_Y_OFFSET,
	INT_RENDERPARM_MORPH_ACCUMULATOR_SUBRECT_WIDTH,
	INT_RENDERPARM_MORPH_ACCUMULATOR_SUBRECT_HEIGHT,
	INT_RENDERPARM_MORPH_ACCUMULATOR_4TUPLE_COUNT,

	INT_RENDERPARM_MORPH_WEIGHT_X_OFFSET,
	INT_RENDERPARM_MORPH_WEIGHT_Y_OFFSET,
	INT_RENDERPARM_MORPH_WEIGHT_SUBRECT_WIDTH,
	INT_RENDERPARM_MORPH_WEIGHT_SUBRECT_HEIGHT,

	INT_RENDERPARM_WRITE_DEPTH_TO_DESTALPHA,

	INT_RENDERPARM_BACK_BUFFER_INDEX,

	// GSTRINGMIGRATION fix for shadows on decals
	INT_FLASHLIGHT_DEPTHTEXTURE_FALLBACK_FIRST,
	INT_FLASHLIGHT_DEPTHTEXTURE_FALLBACK_LAST = INT_FLASHLIGHT_DEPTHTEXTURE_FALLBACK_FIRST + 4,
	INT_CASCADED_DEPTHTEXTURE,
	INT_CASCADED_MATRIX_ADDRESS_0,
	INT_CASCADED_MATRIX_ADDRESS_1,
	// END GSTRINGMIGRATION

	MAX_INT_RENDER_PARMS = 20
};

// for INT_RENDERPARM_BACK_BUFFER_INDEX
#define BACK_BUFFER_INDEX_DEFAULT	0
#define BACK_BUFFER_INDEX_HDR		1

enum RenderParamTexture_t
{
	TEXTURE_RENDERPARM_AMBIENT_OCCLUSION = 0,

	MAX_TEXTURE_RENDER_PARMS = 2
};

// ENABLE_FIXED_LIGHTING modes:
#define ENABLE_FIXED_LIGHTING_NONE 0
#define ENABLE_FIXED_LIGHTING_BASICLIGHT 1
#define ENABLE_FIXED_LIGHTING_OUTPUTMRTS_FOR_DEFERRED_LIGHTING 2
#define ENABLE_FIXED_LIGHTING_OUTPUTNORMAL_AND_DEPTH 3


enum RenderParamFloat_t
{
	FLOAT_RENDERPARM_MINIMUMLIGHTING = 0,
};

#endif // RENDERPARM_H
