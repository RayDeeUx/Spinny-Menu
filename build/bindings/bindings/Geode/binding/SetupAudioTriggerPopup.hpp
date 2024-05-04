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

class SetupAudioTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAudioTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAudioTriggerPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupAudioTriggerPopup::onProxMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onProxMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAudioTriggerPopup::addTimeControls not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addTimeControls(int p0, float p1);
public:
    
private:
    [[deprecated("SetupAudioTriggerPopup::addProxVolControls not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addProxVolControls(int p0);
public:
    
private:
    [[deprecated("SetupAudioTriggerPopup::updateSpecialGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSpecialGroup();
public:

    /**
     * @note[short] MacOS: 0x4932c0
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
};
