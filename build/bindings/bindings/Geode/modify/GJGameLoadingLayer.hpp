#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJGameLoadingLayer.hpp>
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

	#ifndef GEODE_STATICS_gameLayerDidUnload
		#define GEODE_STATICS_gameLayerDidUnload
		GEODE_AS_STATIC_FUNCTION(gameLayerDidUnload) 
	#endif

	#ifndef GEODE_STATICS_transitionToLoadingLayer
		#define GEODE_STATICS_transitionToLoadingLayer
		GEODE_AS_STATIC_FUNCTION(transitionToLoadingLayer) 
	#endif

	#ifndef GEODE_STATICS_loadLevel
		#define GEODE_STATICS_loadLevel
		GEODE_AS_STATIC_FUNCTION(loadLevel) 
	#endif

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

	#ifndef GEODE_STATICS_onEnterTransitionDidFinish
		#define GEODE_STATICS_onEnterTransitionDidFinish
		GEODE_AS_STATIC_FUNCTION(onEnterTransitionDidFinish) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJGameLoadingLayer> : ModifyBase<ModifyDerive<Der, GJGameLoadingLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJGameLoadingLayer>>;
		using ModifyBase<ModifyDerive<Der, GJGameLoadingLayer>>::ModifyBase;
		using Base = GJGameLoadingLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x151030, Default, GJGameLoadingLayer, create, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x151390, Default, GJGameLoadingLayer, init, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfa680, Default, GJGameLoadingLayer, gameLayerDidUnload, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x150f10, Default, GJGameLoadingLayer, transitionToLoadingLayer, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x151490, Default, GJGameLoadingLayer, loadLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x151500, Default, GJGameLoadingLayer, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1514f0, Default, GJGameLoadingLayer, onEnterTransitionDidFinish, )
		}
	};
}
