#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelSettingsDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_levelSettingsUpdated
		#define GEODE_STATICS_levelSettingsUpdated
		GEODE_AS_STATIC_FUNCTION(levelSettingsUpdated) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelSettingsDelegate> : ModifyBase<ModifyDerive<Der, LevelSettingsDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelSettingsDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelSettingsDelegate>>::ModifyBase;
		using Base = LevelSettingsDelegate;
        using Derived = Der;
		void apply() override {

		}
	};
}
