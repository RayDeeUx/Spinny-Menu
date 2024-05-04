#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class SetIDPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "SetIDPopupDelegate";
    
private:
    [[deprecated("SetIDPopupDelegate::setIDPopupClosed not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);
public:
};
