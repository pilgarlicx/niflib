/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _MIPMAP_H_
#define _MIPMAP_H_

#include "NIF_IO.h"


/*!
 * Description of a MipMap within a NiPixelData block.
 */
struct MipMap {
	/*! Default Constructor */
	MipMap();
	/*! Default Destructor */
	~MipMap();
	/*!
	 * Width of the mipmap image.
	 */
	uint width;
	/*!
	 * Height of the mipmap image.
	 */
	uint height;
	/*!
	 * Offset into the pixel data array where this mipmap starts.
	 */
	uint offset;
};

#endif
