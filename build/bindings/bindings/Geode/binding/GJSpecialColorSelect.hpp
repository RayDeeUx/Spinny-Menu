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

class GJSpecialColorSelect : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJSpecialColorSelect";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJSpecialColorSelect, FLAlertLayer)
    
private:
    [[deprecated("GJSpecialColorSelect::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJSpecialColorSelect* create(int p0, GJSpecialColorSelectDelegate* p1, ColorSelectType p2);
public:
    
private:
    [[deprecated("GJSpecialColorSelect::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0, GJSpecialColorSelectDelegate* p1, ColorSelectType p2);
public:
    
private:
    [[deprecated("GJSpecialColorSelect::getButtonByTag not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getButtonByTag(int p0);
public:
    
private:
    [[deprecated("GJSpecialColorSelect::onSelectColor not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJSpecialColorSelect::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS: 0x5eacd0
     * @note[short] Android
     */
    static const char* textForColorIdx(int p0);
    
private:
    [[deprecated("GJSpecialColorSelect::highlightSelected not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn highlightSelected(ButtonSprite* p0);
public:

    /**
     * @note[short] MacOS: 0x5eaf20
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
