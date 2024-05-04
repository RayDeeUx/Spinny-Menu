#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "TextInputDelegate.hpp"

class ConfigureValuePopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "ConfigureValuePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ConfigureValuePopup, FLAlertLayer)
    
private:
    [[deprecated("ConfigureValuePopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ConfigureValuePopup* create(ConfigureValuePopupDelegate* p0, float p1, float p2, float p3, gd::string p4, gd::string p5);
public:
    
private:
    [[deprecated("ConfigureValuePopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(ConfigureValuePopupDelegate* p0, float p1, float p2, float p3, gd::string p4, gd::string p5);
public:
    
private:
    [[deprecated("ConfigureValuePopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ConfigureValuePopup::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("ConfigureValuePopup::updateTextInputLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTextInputLabel();
public:

    /**
     * @note[short] MacOS: 0x5e7e60
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x5e7d10
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x5e7d50
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};
