#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "SetupAreaTintTriggerPopup.hpp"

class SetupAreaAnimTriggerPopup : public SetupAreaTintTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaAnimTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaAnimTriggerPopup, SetupAreaTintTriggerPopup)
    
private:
    [[deprecated("SetupAreaAnimTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupAreaAnimTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1, int p2);
public:
    
private:
    [[deprecated("SetupAreaAnimTriggerPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1, int p2);
public:
    
private:
    [[deprecated("SetupAreaAnimTriggerPopup::onDeactivateAnimValue not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeactivateAnimValue(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupAreaAnimTriggerPopup::updateTargetIDLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTargetIDLabel();
public:
    
private:
    [[deprecated("SetupAreaAnimTriggerPopup::createValueControlAdvancedAnim not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createValueControlAdvancedAnim(int p0, gd::string p1, cocos2d::CCPoint p2, float p3, bool p4, InputValueType p5, int p6, bool p7, float p8, float p9, int p10, int p11, GJInputStyle p12);
public:

    /**
     * @note[short] MacOS: 0x4b7670
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS: 0x4b7810
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
};
