/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "../../include/obj/NiTransformController.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiTransformController::TYPE("NiTransformController", &NI_TRANSFORM_CONTROLLER_PARENT::TYPE );

NiTransformController::NiTransformController() NI_TRANSFORM_CONTROLLER_CONSTRUCT {}

NiTransformController::~NiTransformController() {}

void NiTransformController::Read( istream& in, list<unsigned int> & link_stack, const NifInfo & info ) {
	InternalRead( in, link_stack, info );
}

void NiTransformController::Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, const NifInfo & info ) const {
	InternalWrite( out, link_map, info );
}

string NiTransformController::asString( bool verbose ) const {
	return InternalAsString( verbose );
}

void NiTransformController::FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, const NifInfo & info ) {
	InternalFixLinks( objects, link_stack, info );
}

list<NiObjectRef> NiTransformController::GetRefs() const {
	return InternalGetRefs();
}

const Type & NiTransformController::GetType() const {
	return TYPE;
};

namespace Niflib { 
	typedef NiObject*(*obj_factory_func)();
	extern map<string, obj_factory_func> global_object_map;

	//Initialization function
	static bool Initialization();

	//A static bool to force the initialization to happen pre-main
	static bool obj_initialized = Initialization();

	static bool Initialization() {
		//Add the function to the global object map
		global_object_map["NiTransformController"] = NiTransformController::Create;

		//Do this stuff just to make sure the compiler doesn't optimize this function and the static bool away.
		obj_initialized = true;
		return obj_initialized;
	}
}

NiObject * NiTransformController::Create() {
	return new NiTransformController;
}
