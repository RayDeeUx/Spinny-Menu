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

class GJLocalLevelScoreCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJLocalLevelScoreCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJLocalLevelScoreCell, TableViewCell)

    /**
     * @note[short] MacOS: 0x229fc0
     * @note[short] Windows: 0x87120
     * @note[short] Android
     */
    void loadFromScore(GJLocalScore* p0);
    
private:
    [[deprecated("GJLocalLevelScoreCell::updateBGColor not implemented")]]
    /**
     * @note[short] Windows: 0x873b0
     * @note[short] Android
     */
    void updateBGColor(int p0);
public:

    /**
     * @note[short] MacOS: 0x233e40
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS: 0x233e60
     * @note[short] Android
     */
    virtual void draw();
};
