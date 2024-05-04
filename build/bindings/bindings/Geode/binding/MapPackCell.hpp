#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TableViewCell.hpp"

class MapPackCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "MapPackCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MapPackCell, TableViewCell)
    
private:
    [[deprecated("MapPackCell::onClaimReward not implemented")]]
    /**
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MapPackCell::onClick not implemented")]]
    /**
     * @note[short] Windows: 0x81690
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MapPackCell::reloadCell not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reloadCell();
public:
    
private:
    [[deprecated("MapPackCell::updateBGColor not implemented")]]
    /**
     * @note[short] Windows: 0x807b0
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x223ab0
     * @note[short] Windows: 0x80c40
     * @note[short] Android
     */
    void loadFromMapPack(GJMapPack* p0);
    
private:
    [[deprecated("MapPackCell::playCompleteEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playCompleteEffect();
public:

    /**
     * @note[short] MacOS: 0x230a30
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x230ea0
     * @note[short] Android
     */
    virtual void draw();
};
