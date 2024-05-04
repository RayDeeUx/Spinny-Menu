#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetFolderPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setTextPopupClosed
		#define GEODE_STATICS_setTextPopupClosed
		GEODE_AS_STATIC_FUNCTION(setTextPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_onSetFolderName
		#define GEODE_STATICS_onSetFolderName
		GEODE_AS_STATIC_FUNCTION(onSetFolderName) 
	#endif

	#ifndef GEODE_STATICS_valueChanged
		#define GEODE_STATICS_valueChanged
		GEODE_AS_STATIC_FUNCTION(valueChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetFolderPopup> : ModifyBase<ModifyDerive<Der, SetFolderPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetFolderPopup>>;
		using ModifyBase<ModifyDerive<Der, SetFolderPopup>>::ModifyBase;
		using Base = SetFolderPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x289770, Default, SetFolderPopup, create, int, bool, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x289960, Default, SetFolderPopup, init, int, bool, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28a270, Default, SetFolderPopup, setTextPopupClosed, SetTextPopup*, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x289e60, Default, SetFolderPopup, valueChanged, )
		}
	};
}
