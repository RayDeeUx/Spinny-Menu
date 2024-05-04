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

class EditTriggersPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "EditTriggersPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditTriggersPopup, SetupTriggerPopup)
    
private:
    [[deprecated("EditTriggersPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static EditTriggersPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("EditTriggersPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
public:

    /**
     * @note[short] MacOS: 0x278b60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS: 0x278b50
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();
};
