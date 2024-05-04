#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "DialogDelegate.hpp"

class SecretLayer4 : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer4";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer4, cocos2d::CCLayer)
    
private:
    [[deprecated("SecretLayer4::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SecretLayer4* create();
public:
    
private:
    [[deprecated("SecretLayer4::getMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMessage();
public:
    
private:
    [[deprecated("SecretLayer4::getBasicMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBasicMessage();
public:
    
private:
    [[deprecated("SecretLayer4::getErrorMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getErrorMessage();
public:
    
private:
    [[deprecated("SecretLayer4::getThreadMessage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getThreadMessage();
public:
    
private:
    [[deprecated("SecretLayer4::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer4::onSubmit not implemented")]]
    /**
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer4::onChest01 not implemented")]]
    /**
     * @note[short] Android
     */
    void onChest01(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer4::showDialog not implemented")]]
    /**
     * @note[short] Android
     */
    void showDialog(int p0);
public:
    
private:
    [[deprecated("SecretLayer4::nodeWithTag not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn nodeWithTag(int p0);
public:
    
private:
    [[deprecated("SecretLayer4::selectAThread not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn selectAThread();
public:
    
private:
    [[deprecated("SecretLayer4::playCoinEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playCoinEffect();
public:
    
private:
    [[deprecated("SecretLayer4::showFirstDialog not implemented")]]
    /**
     * @note[short] Android
     */
    void showFirstDialog();
public:
    
private:
    [[deprecated("SecretLayer4::updateSearchLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSearchLabel(char const* p0);
public:
    
private:
    [[deprecated("SecretLayer4::updateMessageLabel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMessageLabel(gd::string p0);
public:
    
private:
    [[deprecated("SecretLayer4::scene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scene();
public:

    /**
     * @note[short] MacOS: 0x38e950
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x393150
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS: 0x393060
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x3921b0
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x392270
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x392340
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x392190
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS: 0x391980
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
};
