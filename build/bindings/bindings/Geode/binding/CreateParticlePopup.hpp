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
#include "ColorSelectDelegate.hpp"
#include "SliderDelegate.hpp"

class CreateParticlePopup : public FLAlertLayer, public TextInputDelegate, public ColorSelectDelegate, public SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "CreateParticlePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreateParticlePopup, FLAlertLayer)
    
private:
    [[deprecated("CreateParticlePopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CreateParticlePopup* create(ParticleGameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("CreateParticlePopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CreateParticlePopup* create(ParticleGameObject* p0, cocos2d::CCArray* p1, gd::string p2);
public:
    
private:
    [[deprecated("CreateParticlePopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CreateParticlePopup* create(gd::string p0);
public:

    /**
     * @note[short] MacOS: 0x44c7e0
     * @note[short] Android
     */
    bool init(ParticleGameObject* p0, cocos2d::CCArray* p1, gd::string p2);
    
private:
    [[deprecated("CreateParticlePopup::getPageMenu not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPageMenu(int p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::getPageButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPageButton(int p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::getPageSliders not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPageSliders(int p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::getPageContainer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPageContainer(int p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::getPageInputNodes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPageInputNodes(int p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::getPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPage(int p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::onQuickStart not implemented")]]
    /**
     * @note[short] Android
     */
    void onQuickStart(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onEmitterMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onEmitterMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onMaxEmission not implemented")]]
    /**
     * @note[short] Android
     */
    void onMaxEmission(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onSelectColor not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onCalcEmission not implemented")]]
    /**
     * @note[short] Android
     */
    void onCalcEmission(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onCopySettings not implemented")]]
    /**
     * @note[short] Android
     */
    void onCopySettings(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onDynamicColor not implemented")]]
    /**
     * @note[short] Android
     */
    void onDynamicColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onUniformColor not implemented")]]
    /**
     * @note[short] Android
     */
    void onUniformColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onEndRGBVarSync not implemented")]]
    /**
     * @note[short] Android
     */
    void onEndRGBVarSync(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onPasteSettings not implemented")]]
    /**
     * @note[short] Android
     */
    void onPasteSettings(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onDuplicateColor not implemented")]]
    /**
     * @note[short] Android
     */
    void onDuplicateColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onOrderSensitive not implemented")]]
    /**
     * @note[short] Android
     */
    void onOrderSensitive(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onToggleBlending not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleBlending(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onDurationForever not implemented")]]
    /**
     * @note[short] Android
     */
    void onDurationForever(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onDynamicRotation not implemented")]]
    /**
     * @note[short] Android
     */
    void onDynamicRotation(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onStartRGBVarSync not implemented")]]
    /**
     * @note[short] Android
     */
    void onStartRGBVarSync(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onAnimateOnTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    void onAnimateOnTrigger(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onAnimateActiveOnly not implemented")]]
    /**
     * @note[short] Android
     */
    void onAnimateActiveOnly(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onSelectParticleTexture not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectParticleTexture(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onToggleStartRotationIsDir not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleStartRotationIsDir(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onToggleStartSizeEqualToEnd not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleStartSizeEqualToEnd(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onToggleStartSpinEqualToEnd not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleStartSpinEqualToEnd(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onToggleStartRadiusEqualToEnd not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleStartRadiusEqualToEnd(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::onPosType not implemented")]]
    /**
     * @note[short] Android
     */
    void onPosType(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreateParticlePopup::sliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::toggleGravityMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleGravityMode(bool p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::updateColorSprite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateColorSprite(int p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::particleValueIsInt not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn particleValueIsInt(gjParticleValue p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::centerAlignParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn centerAlignParticle(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::updateSliderForType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSliderForType(gjParticleValue p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::createParticleSlider not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createParticleSlider(gjParticleValue p0, int p1, bool p2, cocos2d::CCPoint p3, cocos2d::CCArray* p4);
public:
    
private:
    [[deprecated("CreateParticlePopup::maxSliderValueForType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn maxSliderValueForType(gjParticleValue p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::minSliderValueForType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn minSliderValueForType(gjParticleValue p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::titleForParticleValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn titleForParticleValue(gjParticleValue p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::valueForParticleValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn valueForParticleValue(gjParticleValue p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::updateParticleValueForType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateParticleValueForType(float p0, gjParticleValue p1, cocos2d::CCParticleSystemQuad* p2);
public:
    
private:
    [[deprecated("CreateParticlePopup::updateInputNodeStringForType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateInputNodeStringForType(gjParticleValue p0);
public:
    
private:
    [[deprecated("CreateParticlePopup::willClose not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn willClose();
public:

    /**
     * @note[short] MacOS: 0x454030
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS: 0x454bb0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x454cc0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x455090
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x4550e0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS: 0x454a10
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS: 0x4548d0
     * @note[short] Android
     */
    virtual TodoReturn sliderBegan(Slider* p0);

    /**
     * @note[short] MacOS: 0x4549b0
     * @note[short] Android
     */
    virtual TodoReturn sliderEnded(Slider* p0);

    /**
     * @note[short] MacOS: 0x453da0
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* p0);

    /**
     * @note[short] MacOS: 0x454a40
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS: 0x454b00
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x4541a0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS: 0x4541e0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};
