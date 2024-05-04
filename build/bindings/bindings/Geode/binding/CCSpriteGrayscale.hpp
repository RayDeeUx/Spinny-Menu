#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpriteWithHue.hpp"

class CCSpriteGrayscale : public CCSpriteWithHue {
public:
    static constexpr auto CLASS_NAME = "CCSpriteGrayscale";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CCSpriteGrayscale, CCSpriteWithHue)
    
private:
    [[deprecated("CCSpriteGrayscale::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CCSpriteGrayscale* create(gd::string const& p0);
public:
    
private:
    [[deprecated("CCSpriteGrayscale::create not implemented")]]
    /**
     * @note[short] Android
     */
    static CCSpriteGrayscale* create(gd::string const& p0, cocos2d::CCRect const& p1);
public:
    
private:
    [[deprecated("CCSpriteGrayscale::createWithTexture not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithTexture(cocos2d::CCTexture2D* p0);
public:
    
private:
    [[deprecated("CCSpriteGrayscale::createWithTexture not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1, bool p2);
public:

    /**
     * @note[short] MacOS: 0x5b6a70
     * @note[short] Android
     */
    TodoReturn createWithSpriteFrame(cocos2d::CCSpriteFrame* p0);

    /**
     * @note[short] MacOS: 0x5b6b50
     * @note[short] Android
     */
    static CCSpriteGrayscale* createWithSpriteFrameName(gd::string const& p0);

    /**
     * @note[short] MacOS: 0x5b66f0
     * @note[short] Android
     */
    virtual TodoReturn getShaderName();

    /**
     * @note[short] MacOS: 0x5b64f0
     * @note[short] Android
     */
    virtual TodoReturn shaderBody();
};
