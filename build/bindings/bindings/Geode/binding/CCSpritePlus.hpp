#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CCSpritePlus : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCSpritePlus";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCSpritePlus, cocos2d::CCSprite)
    
private:
    [[deprecated("CCSpritePlus::getFollower not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getFollower();
public:
    
private:
    [[deprecated("CCSpritePlus::stopFollow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopFollow();
public:

    /**
     * @note[short] MacOS: 0x45e810
     * @note[short] Android
     */
    TodoReturn addFollower(cocos2d::CCNode* p0);
    
private:
    [[deprecated("CCSpritePlus::followSprite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn followSprite(CCSpritePlus* p0);
public:
    
private:
    [[deprecated("CCSpritePlus::removeFollower not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeFollower(cocos2d::CCNode* p0);
public:
    
private:
    [[deprecated("CCSpritePlus::createWithSpriteFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithSpriteFrame(cocos2d::CCSpriteFrame* p0);
public:
    
private:
    [[deprecated("CCSpritePlus::createWithSpriteFrameName not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithSpriteFrameName(char const* p0);
public:

    /**
     * @note[short] MacOS: 0x45e690
     * @note[short] Windows: 0x28c10
     * @note[short] Android
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] MacOS: 0x45e710
     * @note[short] Windows: 0x28c90
     * @note[short] Android
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] MacOS: 0x45e790
     * @note[short] Windows: 0x28d10
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] MacOS: 0x45e2f0
     * @note[short] Windows: 0x288f0
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS: 0x45e370
     * @note[short] Android
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] MacOS: 0x45e3f0
     * @note[short] Android
     */
    virtual void setRotationX(float p0);

    /**
     * @note[short] MacOS: 0x45e470
     * @note[short] Android
     */
    virtual void setRotationY(float p0);

    /**
     * @note[short] MacOS: 0x45e2d0
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0);

    /**
     * @note[short] MacOS: 0x45e2b0
     * @note[short] Android
     */
    virtual bool initWithSpriteFrameName(char const* p0);

    /**
     * @note[short] MacOS: 0x45e4f0
     * @note[short] Android
     */
    virtual void setFlipX(bool p0);

    /**
     * @note[short] MacOS: 0x45e5c0
     * @note[short] Android
     */
    virtual void setFlipY(bool p0);
    cocos2d::CCArray* m_followers;
    CCSpritePlus* m_followingSprite;
    bool m_hasFollower;
    bool m_propagateScaleChanges;
    bool m_propagateFlipChanges;
};
