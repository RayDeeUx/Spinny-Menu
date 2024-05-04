#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EnhancedGameObject.hpp"

class EffectGameObject : public EnhancedGameObject {
public:
    static constexpr auto CLASS_NAME = "EffectGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EffectGameObject, EnhancedGameObject)

    /**
     * @note[short] MacOS: 0x1a1820
     * @note[short] Android
     */
    static EffectGameObject* create(char const* p0);
    
private:
    [[deprecated("EffectGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("EffectGameObject::getTargetColorIndex not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTargetColorIndex();
public:
    
private:
    [[deprecated("EffectGameObject::setTargetID not implemented")]]
    /**
     * @note[short] Android
     */
    void setTargetID(int p0);
public:
    
private:
    [[deprecated("EffectGameObject::setTargetID2 not implemented")]]
    /**
     * @note[short] Android
     */
    void setTargetID2(int p0);
public:

    /**
     * @note[short] MacOS: 0x1a1ca0
     * @note[short] Windows: 0x3960d0
     * @note[short] Android
     */
    void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS: 0x186dc0
     * @note[short] Android
     */
    void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);
    
private:
    [[deprecated("EffectGameObject::playTriggerEffect not implemented")]]
    /**
     * @note[short] Windows: 0x395e50
     * @note[short] Android
     */
    TodoReturn playTriggerEffect();
public:
    
private:
    [[deprecated("EffectGameObject::resetSpawnTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetSpawnTrigger();
public:
    
private:
    [[deprecated("EffectGameObject::updateSpecialColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSpecialColor();
public:
    
private:
    [[deprecated("EffectGameObject::updateSpeedModType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSpeedModType();
public:
    
private:
    [[deprecated("EffectGameObject::triggerEffectFinished not implemented")]]
    /**
     * @note[short] Windows: 0x396080
     * @note[short] Android
     */
    TodoReturn triggerEffectFinished();
public:
    
private:
    [[deprecated("EffectGameObject::updateInteractiveHover not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateInteractiveHover(float p0);
public:

    /**
     * @note[short] MacOS: 0x1d33f0
     * @note[short] Android
     */
     EffectGameObject();

    /**
     * @note[short] MacOS: 0x1a1c20
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS: 0x1a3b80
     * @note[short] Android
     */
    virtual void firstSetup();

    /**
     * @note[short] MacOS: 0x185c50
     * @note[short] Windows: 0x397d30
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS: 0x17b7a0
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS: 0x1a18b0
     * @note[short] Android
     */
    virtual void setRScaleX(float p0);

    /**
     * @note[short] MacOS: 0x1a18d0
     * @note[short] Android
     */
    virtual void setRScaleY(float p0);

    /**
     * @note[short] MacOS: 0x1a3b10
     * @note[short] Android
     */
    virtual void triggerActivated(float p0);

    /**
     * @note[short] MacOS: 0x1a38d0
     * @note[short] Android
     */
    virtual TodoReturn restoreObject();

    /**
     * @note[short] MacOS: 0x1a3ad0
     * @note[short] Android
     */
    virtual TodoReturn spawnXPosition();

    /**
     * @note[short] MacOS: 0x1a3c70
     * @note[short] Android
     */
    virtual TodoReturn canReverse();

    /**
     * @note[short] MacOS: 0x1a3ce0
     * @note[short] Android
     */
    virtual bool isSpecialSpawnObject();

    /**
     * @note[short] MacOS: 0x1a3cf0
     * @note[short] Android
     */
    virtual TodoReturn canBeOrdered();

    /**
     * @note[short] MacOS: 0x1d2c60
     * @note[short] Android
     */
    virtual TodoReturn getObjectLabel();

    /**
     * @note[short] MacOS: 0x1d2c70
     * @note[short] Android
     */
    virtual void setObjectLabel(cocos2d::CCLabelBMFont* p0);

    /**
     * @note[short] MacOS: 0x1a3830
     * @note[short] Android
     */
    virtual TodoReturn stateSensitiveOff(GJBaseGameLayer* p0);
    bool m_unknownBool;
    cocos2d::ccColor3B m_triggerTargetColor;
    float m_duration;
    float m_opacity;
    GEODE_PAD(4);
    int m_targetGroupID;
    int m_centerGroupID;
    bool m_isTouchTriggered;
    bool m_isSpawnTriggered;
    bool m_hasCenterEffect;
    float m_shakeStrength;
    float m_shakeInterval;
    bool m_tintGround;
    bool m_usesPlayerColor1;
    bool m_usesPlayerColor2;
    bool m_usesBlending;
    float m_moveOffsetX;
    float m_moveOffsetY;
    EasingType m_easingType;
    float m_easingRate;
    bool m_lockToPlayerX;
    bool m_lockToPlayerY;
    bool m_lockToCameraX;
    bool m_lockToCameraY;
    bool m_useMoveTarget;
    MoveTargetType m_moveTargetMode;
    float m_moveModX;
    float m_moveModY;
    bool m_property393;
    bool m_isDirectionFollowSnap360;
    int m_targetModCenterID;
    float m_directionModeDistance;
    bool m_isDynamicMode;
    bool m_isSilent;
    GEODE_PAD(6);
    float m_rotationDegrees;
    int m_times360;
    bool m_lockObjectRotation;
    int m_rotationTargetID;
    float m_rotationOffset;
    EasingType m_dynamicModeEasing;
    float m_followXMod;
    float m_followYMod;
    float m_followYSpeed;
    float m_followYDelay;
    int m_followYOffset;
    float m_followYMaxSpeed;
    float m_fadeInDuration;
    float m_holdDuration;
    float m_fadeOutDuration;
    int m_pulseMode;
    int m_pulseTargetType;
    cocos2d::ccHSVValue m_hsvValue;
    int m_copyColorID;
    bool m_copyOpacity;
    bool m_pulseMainOnly;
    bool m_pulseDetailOnly;
    bool m_pulseExclusive;
    bool m_property210;
    bool m_activateGroup;
    bool m_touchHoldMode;
    TouchToggleMode m_touchToggleMode;
    int m_touchPlayerMode;
    bool m_isDualMode;
    int m_animationID;
    GEODE_PAD(8);
    bool m_isMultiTriggered;
    GEODE_PAD(2);
    bool m_triggerOnExit;
    int m_itemID2;
    int m_property534;
    GEODE_PAD(1);
    bool m_isDynamicBlock;
    int m_itemID;
    bool m_targetPlayer1;
    bool m_targetPlayer2;
    bool m_followCPP;
    bool m_subtractCount;
    bool m_collectibleIsPickupItem;
    bool m_collectibleIsToggleTrigger;
    int m_collectibleParticleID;
    int m_collectiblePoints;
    bool m_hasNoAnimation;
    GEODE_PAD(35);
    float m_gravityValue;
    bool m_isSinglePTouch;
    GEODE_PAD(3);
    float m_zoomValue;
    bool m_cameraIsFreeMode;
    bool m_cameraEditCameraSettings;
    float m_cameraEasingValue;
    float m_cameraPaddingValue;
    bool m_cameraDisableGridSnap;
    bool m_property118;
    float m_timeWarpTimeMod;
    bool m_shouldPreview;
    int m_ordValue;
    int m_channelValue;
    bool m_isReverse;
    GEODE_PAD(11);
    int m_secretCoinID;
    GEODE_PAD(28);
    cocos2d::CCLabelBMFont* m_objectLabel;
    bool m_ignoreGroupParent;
    bool m_ignoreLinkedObjects;
    GEODE_PAD(1);
};
