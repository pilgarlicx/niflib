/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NISPECULARPROPERTY_H_
#define _NISPECULARPROPERTY_H_

#include "NiProperty.h"

#include "gen/obj_defines.h"

/*
 * NiSpecularProperty
 */

class NiSpecularProperty;
typedef Ref<NiSpecularProperty> NiSpecularPropertyRef;

class NiSpecularProperty : public NI_SPECULAR_PROPERTY_PARENT {
public:
	NiSpecularProperty();
	~NiSpecularProperty();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version );
	virtual const Type & GetType() const;
protected:
	NI_SPECULAR_PROPERTY_MEMBERS
};

#endif
