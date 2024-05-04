#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "OptionsObjectDelegate.hpp"

class MusicSearchResult : public cocos2d::CCObject, public OptionsObjectDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicSearchResult";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicSearchResult, cocos2d::CCObject)
    
private:
    [[deprecated("MusicSearchResult::create not implemented")]]
    /**
     * @note[short] Android
     */
    static MusicSearchResult* create();
public:
    
private:
    [[deprecated("MusicSearchResult::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init();
public:
    
private:
    [[deprecated("MusicSearchResult::getFilesMatchingSearch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getFilesMatchingSearch(cocos2d::CCArray* p0, gd::string p1);
public:
    
private:
    [[deprecated("MusicSearchResult::updateObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateObjects();
public:
    
private:
    [[deprecated("MusicSearchResult::applyTagFilters not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applyTagFilters(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("MusicSearchResult::updateFutureCount not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateFutureCount(cocos2d::CCArray* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("MusicSearchResult::applyArtistFilters not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applyArtistFilters(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("MusicSearchResult::createTagFilterObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createTagFilterObjects();
public:
    
private:
    [[deprecated("MusicSearchResult::createArtistFilterObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createArtistFilterObjects();
public:

    /**
     * @note[short] MacOS: 0x561cc0
     * @note[short] Android
     */
    virtual TodoReturn updateObjects(AudioSortType p0);

    /**
     * @note[short] MacOS: 0x561c60
     * @note[short] Android
     */
    virtual TodoReturn stateChanged(OptionsObject* p0);
};
