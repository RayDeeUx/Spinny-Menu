#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupTriggerPopup.hpp"

class SetupAdvFollowEditPhysicsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAdvFollowEditPhysicsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAdvFollowEditPhysicsPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupAdvFollowEditPhysicsPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupAdvFollowEditPhysicsPopup* create(AdvancedFollowEditObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupAdvFollowEditPhysicsPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(AdvancedFollowEditObject* p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] MacOS: 0x2e8540
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
};
