#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJChestSprite.hpp>
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

	#ifndef GEODE_STATICS_switchToState
		#define GEODE_STATICS_switchToState
		GEODE_AS_STATIC_FUNCTION(switchToState) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJChestSprite> : ModifyBase<ModifyDerive<Der, GJChestSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJChestSprite>>;
		using ModifyBase<ModifyDerive<Der, GJChestSprite>>::ModifyBase;
		using Base = GJChestSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1faf50, Default, GJChestSprite, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fc3d0, Default, GJChestSprite, switchToState, ChestSpriteState, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fda20, Default, GJChestSprite, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fd930, Default, GJChestSprite, setColor, cocos2d::_ccColor3B const&)
		}
	};
}
