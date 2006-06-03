/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "obj/BSParentVelocityModifier.h"

//Definition of TYPE constant
const Type BSParentVelocityModifier::TYPE("BSParentVelocityModifier", &B_S_PARENT_VELOCITY_MODIFIER_PARENT::TYPE );

BSParentVelocityModifier::BSParentVelocityModifier() B_S_PARENT_VELOCITY_MODIFIER_CONSTRUCT {}

BSParentVelocityModifier::~BSParentVelocityModifier() {}

void BSParentVelocityModifier::Read( istream& in, list<uint> & link_stack, unsigned int version ) {
	B_S_PARENT_VELOCITY_MODIFIER_READ
}

void BSParentVelocityModifier::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const {
	B_S_PARENT_VELOCITY_MODIFIER_WRITE
}

string BSParentVelocityModifier::asString( bool verbose ) const {
	B_S_PARENT_VELOCITY_MODIFIER_STRING
}

void BSParentVelocityModifier::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version ) {
	B_S_PARENT_VELOCITY_MODIFIER_FIXLINKS
}

const Type & BSParentVelocityModifier::GetType() const {
	return TYPE;
};

