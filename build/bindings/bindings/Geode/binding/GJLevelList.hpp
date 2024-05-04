#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJLevelList : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJLevelList";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJLevelList, cocos2d::CCNode)
    
private:
    [[deprecated("GJLevelList::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJLevelList* create(cocos2d::CCDictionary* p0);
public:

    /**
     * @note[short] MacOS: 0x502610
     * @note[short] Android
     */
    static GJLevelList* create();
    
private:
    [[deprecated("GJLevelList::getListLevelsArray not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getListLevelsArray(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] MacOS: 0x52e6a0
     * @note[short] Android
     */
    gd::string getUnpackedDescription();

    /**
     * @note[short] MacOS: 0x52fff0
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
    
private:
    [[deprecated("GJLevelList::totalLevels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn totalLevels();
public:
    
private:
    [[deprecated("GJLevelList::reorderLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reorderLevel(int p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x52fba0
     * @note[short] Android
     */
    void showListInfo();
    
private:
    [[deprecated("GJLevelList::orderForLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn orderForLevel(int p0);
public:
    
private:
    [[deprecated("GJLevelList::addLevelToList not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addLevelToList(GJGameLevel* p0);
public:

    /**
     * @note[short] MacOS: 0x52fb50
     * @note[short] Android
     */
    int completedLevels();

    /**
     * @note[short] MacOS: 0x52ffc0
     * @note[short] Android
     */
    TodoReturn createWithCoder(DS_Dictionary* p0);
    
private:
    [[deprecated("GJLevelList::parseListLevels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn parseListLevels(gd::string p0);
public:
    
private:
    [[deprecated("GJLevelList::reorderLevelStep not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reorderLevelStep(int p0, bool p1);
public:
    
private:
    [[deprecated("GJLevelList::updateLevelsString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLevelsString();
public:
    
private:
    [[deprecated("GJLevelList::duplicateListLevels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn duplicateListLevels(GJLevelList* p0);
public:
    
private:
    [[deprecated("GJLevelList::removeLevelFromList not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeLevelFromList(int p0);
public:
    
private:
    [[deprecated("GJLevelList::frameForListDifficulty not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn frameForListDifficulty(int p0, DifficultyIconType p1);
public:

    /**
     * @note[short] MacOS: 0x5302f0
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);

    /**
     * @note[short] MacOS: 0x530520
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS: 0x52e620
     * @note[short] Android
     */
    virtual bool init();
    gd::vector<int> m_levels;
    int m_listID;
    int m_listVersion;
    int m_downloads;
    int m_likes;
    int m_difficulty;
    int m_accountID;
    int m_folder;
    int m_listRevision;
    int m_listOrder;
    int m_original;
    int m_diamonds;
    int m_levelsToClaim;
    bool m_unkBool;
    bool m_unlisted;
    bool m_friendsOnly;
    bool m_uploaded;
    bool m_favorite;
    bool m_featured;
    bool m_k100;
    gd::string m_creatorName;
    gd::string m_listName;
    gd::string m_unkString;
    gd::string m_levelsString;
    gd::string m_listDesc;
    int m_uploadDate;
    int m_updateDate;
    cocos2d::CCDictionary* m_k97;
    int m_listType;
    int m_M_ID;
};
