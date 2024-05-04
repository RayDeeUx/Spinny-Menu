#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EnhancedGameObject.hpp>
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

	#ifndef GEODE_STATICS_updateState
		#define GEODE_STATICS_updateState
		GEODE_AS_STATIC_FUNCTION(updateState) 
	#endif

	#ifndef GEODE_STATICS_updateUserCoin
		#define GEODE_STATICS_updateUserCoin
		GEODE_AS_STATIC_FUNCTION(updateUserCoin) 
	#endif

	#ifndef GEODE_STATICS_triggerAnimation
		#define GEODE_STATICS_triggerAnimation
		GEODE_AS_STATIC_FUNCTION(triggerAnimation) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_createRotateAction
		#define GEODE_STATICS_createRotateAction
		GEODE_AS_STATIC_FUNCTION(createRotateAction) 
	#endif

	#ifndef GEODE_STATICS_updateRotateAction
		#define GEODE_STATICS_updateRotateAction
		GEODE_AS_STATIC_FUNCTION(updateRotateAction) 
	#endif

	#ifndef GEODE_STATICS_refreshRotateAction
		#define GEODE_STATICS_refreshRotateAction
		GEODE_AS_STATIC_FUNCTION(refreshRotateAction) 
	#endif

	#ifndef GEODE_STATICS_resetSyncedAnimation
		#define GEODE_STATICS_resetSyncedAnimation
		GEODE_AS_STATIC_FUNCTION(resetSyncedAnimation) 
	#endif

	#ifndef GEODE_STATICS_previewAnimateOnTrigger
		#define GEODE_STATICS_previewAnimateOnTrigger
		GEODE_AS_STATIC_FUNCTION(previewAnimateOnTrigger) 
	#endif

	#ifndef GEODE_STATICS_setupAnimationVariables
		#define GEODE_STATICS_setupAnimationVariables
		GEODE_AS_STATIC_FUNCTION(setupAnimationVariables) 
	#endif

	#ifndef GEODE_STATICS_waitForAnimationTrigger
		#define GEODE_STATICS_waitForAnimationTrigger
		GEODE_AS_STATIC_FUNCTION(waitForAnimationTrigger) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_deactivateObject
		#define GEODE_STATICS_deactivateObject
		GEODE_AS_STATIC_FUNCTION(deactivateObject) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_triggerActivated
		#define GEODE_STATICS_triggerActivated
		GEODE_AS_STATIC_FUNCTION(triggerActivated) 
	#endif

	#ifndef GEODE_STATICS_restoreObject
		#define GEODE_STATICS_restoreObject
		GEODE_AS_STATIC_FUNCTION(restoreObject) 
	#endif

	#ifndef GEODE_STATICS_animationTriggered
		#define GEODE_STATICS_animationTriggered
		GEODE_AS_STATIC_FUNCTION(animationTriggered) 
	#endif

	#ifndef GEODE_STATICS_activatedByPlayer
		#define GEODE_STATICS_activatedByPlayer
		GEODE_AS_STATIC_FUNCTION(activatedByPlayer) 
	#endif

	#ifndef GEODE_STATICS_hasBeenActivatedByPlayer
		#define GEODE_STATICS_hasBeenActivatedByPlayer
		GEODE_AS_STATIC_FUNCTION(hasBeenActivatedByPlayer) 
	#endif

	#ifndef GEODE_STATICS_hasBeenActivated
		#define GEODE_STATICS_hasBeenActivated
		GEODE_AS_STATIC_FUNCTION(hasBeenActivated) 
	#endif

	#ifndef GEODE_STATICS_saveActiveColors
		#define GEODE_STATICS_saveActiveColors
		GEODE_AS_STATIC_FUNCTION(saveActiveColors) 
	#endif

	#ifndef GEODE_STATICS_canAllowMultiActivate
		#define GEODE_STATICS_canAllowMultiActivate
		GEODE_AS_STATIC_FUNCTION(canAllowMultiActivate) 
	#endif

	#ifndef GEODE_STATICS_getHasSyncedAnimation
		#define GEODE_STATICS_getHasSyncedAnimation
		GEODE_AS_STATIC_FUNCTION(getHasSyncedAnimation) 
	#endif

	#ifndef GEODE_STATICS_getHasRotateAction
		#define GEODE_STATICS_getHasRotateAction
		GEODE_AS_STATIC_FUNCTION(getHasRotateAction) 
	#endif

	#ifndef GEODE_STATICS_canMultiActivate
		#define GEODE_STATICS_canMultiActivate
		GEODE_AS_STATIC_FUNCTION(canMultiActivate) 
	#endif

	#ifndef GEODE_STATICS_powerOnObject
		#define GEODE_STATICS_powerOnObject
		GEODE_AS_STATIC_FUNCTION(powerOnObject) 
	#endif

	#ifndef GEODE_STATICS_powerOffObject
		#define GEODE_STATICS_powerOffObject
		GEODE_AS_STATIC_FUNCTION(powerOffObject) 
	#endif

	#ifndef GEODE_STATICS_stateSensitiveOff
		#define GEODE_STATICS_stateSensitiveOff
		GEODE_AS_STATIC_FUNCTION(stateSensitiveOff) 
	#endif

	#ifndef GEODE_STATICS_updateSyncedAnimation
		#define GEODE_STATICS_updateSyncedAnimation
		GEODE_AS_STATIC_FUNCTION(updateSyncedAnimation) 
	#endif

	#ifndef GEODE_STATICS_updateAnimateOnTrigger
		#define GEODE_STATICS_updateAnimateOnTrigger
		GEODE_AS_STATIC_FUNCTION(updateAnimateOnTrigger) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EnhancedGameObject> : ModifyBase<ModifyDerive<Der, EnhancedGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EnhancedGameObject>>;
		using ModifyBase<ModifyDerive<Der, EnhancedGameObject>>::ModifyBase;
		using Base = EnhancedGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x591c40, Default, EnhancedGameObject, init, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x588e40, Default, EnhancedGameObject, updateUserCoin, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x592260, Default, EnhancedGameObject, customObjectSetup, gd::vector<gd::string>&, gd::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x592740, Default, EnhancedGameObject, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x591f80, Default, EnhancedGameObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x595600, Default, EnhancedGameObject, deactivateObject, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x595660, Default, EnhancedGameObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5920f0, Default, EnhancedGameObject, triggerActivated, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x592020, Default, EnhancedGameObject, restoreObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5921c0, Default, EnhancedGameObject, animationTriggered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x592100, Default, EnhancedGameObject, activatedByPlayer, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x592150, Default, EnhancedGameObject, hasBeenActivatedByPlayer, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5921a0, Default, EnhancedGameObject, hasBeenActivated, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5921e0, Default, EnhancedGameObject, saveActiveColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x591c80, Default, EnhancedGameObject, canAllowMultiActivate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2c10, Default, EnhancedGameObject, getHasSyncedAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d2c20, Default, EnhancedGameObject, getHasRotateAction, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5920d0, Default, EnhancedGameObject, canMultiActivate, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x592060, Default, EnhancedGameObject, powerOnObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x592080, Default, EnhancedGameObject, powerOffObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a38c0, Default, EnhancedGameObject, stateSensitiveOff, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x239c80, Default, EnhancedGameObject, updateSyncedAnimation, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23bba0, Default, EnhancedGameObject, updateAnimateOnTrigger, bool)
		}
	};
}
