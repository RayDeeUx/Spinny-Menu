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

class SetupGradientPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupGradientPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGradientPopup, SetupTriggerPopup)
    
private:
    [[deprecated("SetupGradientPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupGradientPopup* create(GradientTriggerObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupGradientPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GradientTriggerObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("SetupGradientPopup::onBlending not implemented")]]
    /**
     * @note[short] Android
     */
    void onBlending(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x5b8ca0
     * @note[short] Android
     */
    void onPlusButton(cocos2d::CCObject* sender);
    
private:
    [[deprecated("SetupGradientPopup::onZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    void onZLayer(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupGradientPopup::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupGradientPopup::updateBlending not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBlending();
public:
    
private:
    [[deprecated("SetupGradientPopup::updateBlendingLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBlendingLabel();
public:
    
private:
    [[deprecated("SetupGradientPopup::updateZLayerButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateZLayerButtons();
public:
    
private:
    [[deprecated("SetupGradientPopup::updateGradientLabels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGradientLabels(bool p0);
public:

    /**
     * @note[short] MacOS: 0x5b8b80
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();

    /**
     * @note[short] MacOS: 0x5b8cf0
     * @note[short] Android
     */
    virtual TodoReturn updateToggleItem(int p0, bool p1);

    /**
     * @note[short] MacOS: 0x5b8eb0
     * @note[short] Android
     */
    virtual TodoReturn valueDidChange(int p0, float p1);
};
