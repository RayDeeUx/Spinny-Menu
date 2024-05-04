#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class NumberInputDelegate {
public:
    static constexpr auto CLASS_NAME = "NumberInputDelegate";
    
private:
    [[deprecated("NumberInputDelegate::numberInputClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn numberInputClosed(NumberInputLayer* p0);
public:
};
