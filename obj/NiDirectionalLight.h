/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIDIRECTIONALLIGHT_H_
#define _NIDIRECTIONALLIGHT_H_

#include "xml_extract.h"
#include NI_DIRECTIONAL_LIGHT_INCLUDE

/*
 * NiDirectionalLight
 */

class NiDirectionalLight;
typedef Ref<NiDirectionalLight> NiDirectionalLightRef;

class NiDirectionalLight : public NI_DIRECTIONAL_LIGHT_PARENT {
public:
	NiDirectionalLight();
	~NiDirectionalLight();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> link_stack, unsigned int version );
private:
	NI_DIRECTIONAL_LIGHT_MEMBERS
};
#endif