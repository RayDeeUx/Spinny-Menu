#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TextAlertPopup.hpp>
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

	#ifndef GEODE_STATICS_setLabelColor
		#define GEODE_STATICS_setLabelColor
		GEODE_AS_STATIC_FUNCTION(setLabelColor) 
	#endif

	#ifndef GEODE_STATICS_setAlertPosition
		#define GEODE_STATICS_setAlertPosition
		GEODE_AS_STATIC_FUNCTION(setAlertPosition) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TextAlertPopup> : ModifyBase<ModifyDerive<Der, TextAlertPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TextAlertPopup>>;
		using ModifyBase<ModifyDerive<Der, TextAlertPopup>>::ModifyBase;
		using Base = TextAlertPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28b290, Default, TextAlertPopup, create, gd::string, float, float, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28b3c0, Default, TextAlertPopup, init, gd::string, float, float, int, gd::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28b6d0, Default, TextAlertPopup, setLabelColor, cocos2d::_ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x28b710, Default, TextAlertPopup, setAlertPosition, cocos2d::CCPoint, cocos2d::CCPoint)
		}
	};
}
