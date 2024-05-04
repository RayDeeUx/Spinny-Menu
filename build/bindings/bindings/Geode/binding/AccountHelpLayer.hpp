#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"
#include "GJAccountDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class AccountHelpLayer : public GJDropDownLayer, public GJAccountDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountHelpLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountHelpLayer, GJDropDownLayer)
    
private:
    [[deprecated("AccountHelpLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static AccountHelpLayer* create();
public:
    
private:
    [[deprecated("AccountHelpLayer::onAccountManagement not implemented")]]
    /**
     * @note[short] Android
     */
    void onAccountManagement(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountHelpLayer::onUnlink not implemented")]]
    /**
     * @note[short] Android
     */
    void onUnlink(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountHelpLayer::onReLogin not implemented")]]
    /**
     * @note[short] Android
     */
    void onReLogin(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("AccountHelpLayer::updatePage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePage();
public:
    
private:
    [[deprecated("AccountHelpLayer::verifyUnlink not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifyUnlink();
public:
    
private:
    [[deprecated("AccountHelpLayer::doUnlink not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn doUnlink();
public:
    
private:
    [[deprecated("AccountHelpLayer::exitLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn exitLayer();
public:

    /**
     * @note[short] MacOS: 0xcab60
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS: 0xcb740
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS: 0xcb600
     * @note[short] Android
     */
    virtual TodoReturn accountStatusChanged();

    /**
     * @note[short] MacOS: 0xcb630
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
