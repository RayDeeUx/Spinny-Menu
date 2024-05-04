#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ChallengesPage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_updateDots
		#define GEODE_STATICS_updateDots
		GEODE_AS_STATIC_FUNCTION(updateDots) 
	#endif

	#ifndef GEODE_STATICS_updateTimers
		#define GEODE_STATICS_updateTimers
		GEODE_AS_STATIC_FUNCTION(updateTimers) 
	#endif

	#ifndef GEODE_STATICS_exitNodeAtSlot
		#define GEODE_STATICS_exitNodeAtSlot
		GEODE_AS_STATIC_FUNCTION(exitNodeAtSlot) 
	#endif

	#ifndef GEODE_STATICS_tryGetChallenges
		#define GEODE_STATICS_tryGetChallenges
		GEODE_AS_STATIC_FUNCTION(tryGetChallenges) 
	#endif

	#ifndef GEODE_STATICS_createChallengeNode
		#define GEODE_STATICS_createChallengeNode
		GEODE_AS_STATIC_FUNCTION(createChallengeNode) 
	#endif

	#ifndef GEODE_STATICS_claimItem
		#define GEODE_STATICS_claimItem
		GEODE_AS_STATIC_FUNCTION(claimItem) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_challengeStatusFinished
		#define GEODE_STATICS_challengeStatusFinished
		GEODE_AS_STATIC_FUNCTION(challengeStatusFinished) 
	#endif

	#ifndef GEODE_STATICS_challengeStatusFailed
		#define GEODE_STATICS_challengeStatusFailed
		GEODE_AS_STATIC_FUNCTION(challengeStatusFailed) 
	#endif

	#ifndef GEODE_STATICS_currencyWillExit
		#define GEODE_STATICS_currencyWillExit
		GEODE_AS_STATIC_FUNCTION(currencyWillExit) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ChallengesPage> : ModifyBase<ModifyDerive<Der, ChallengesPage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ChallengesPage>>;
		using ModifyBase<ModifyDerive<Der, ChallengesPage>>::ModifyBase;
		using Base = ChallengesPage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37aa70, Default, ChallengesPage, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37b610, Default, ChallengesPage, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37b650, Default, ChallengesPage, updateTimers, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37b890, Default, ChallengesPage, createChallengeNode, int, bool, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37abe0, Default, ChallengesPage, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37c280, Default, ChallengesPage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37c1f0, Default, ChallengesPage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37c050, Default, ChallengesPage, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37c1d0, Default, ChallengesPage, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37bb50, Default, ChallengesPage, challengeStatusFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37be60, Default, ChallengesPage, challengeStatusFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x37c3f0, Default, ChallengesPage, currencyWillExit, CurrencyRewardLayer*)
		}
	};
}
