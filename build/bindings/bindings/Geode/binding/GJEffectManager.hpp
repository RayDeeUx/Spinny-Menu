#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJEffectManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJEffectManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJEffectManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS: 0x2b6ad0
     * @note[short] Android
     */
    static GJEffectManager* create();
    
private:
    [[deprecated("GJEffectManager::getMixedColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMixedColor(cocos2d::_ccColor3B p0, cocos2d::_ccColor3B p1, float p2);
public:

    /**
     * @note[short] MacOS: 0x2c78e0
     * @note[short] Android
     */
    gd::string getSaveString();

    /**
     * @note[short] MacOS: 0x2b80f0
     * @note[short] Windows: 0x1d7a60
     * @note[short] Android
     */
    ColorAction* getColorAction(int p0);

    /**
     * @note[short] MacOS: 0x2b82b0
     * @note[short] Windows: 0x1d7ae0
     * @note[short] Android
     */
    ColorActionSprite* getColorSprite(int p0);
    
private:
    [[deprecated("GJEffectManager::getAllColorActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllColorActions();
public:
    
private:
    [[deprecated("GJEffectManager::getAllColorSprites not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAllColorSprites();
public:
    
private:
    [[deprecated("GJEffectManager::getMoveCommandNode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMoveCommandNode(GroupCommandObject2* p0);
public:
    
private:
    [[deprecated("GJEffectManager::getLoadedMoveOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLoadedMoveOffset(gd::unordered_map<int, std::pair<double, double>>& p0);
public:
    
private:
    [[deprecated("GJEffectManager::getTempGroupCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTempGroupCommand();
public:
    
private:
    [[deprecated("GJEffectManager::getMoveCommandObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMoveCommandObject();
public:
    
private:
    [[deprecated("GJEffectManager::getOpacityActionForGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getOpacityActionForGroup(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::setFollowing not implemented")]]
    /**
     * @note[short] Android
     */
    void setFollowing(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GJEffectManager::setColorAction not implemented")]]
    /**
     * @note[short] Android
     */
    void setColorAction(ColorAction* p0, int p1);
public:
    
private:
    [[deprecated("GJEffectManager::pauseTimer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pauseTimer(int p0);
public:

    /**
     * @note[short] MacOS: 0x2c4bf0
     * @note[short] Windows: 0x1de560
     * @note[short] Android
     */
    TodoReturn playerDied();
    
private:
    [[deprecated("GJEffectManager::spawnGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnGroup(int p0, float p1, bool p2, gd::vector<int> const& p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJEffectManager::startTimer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn startTimer(int p0, double p1, double p2, bool p3, bool p4, bool p5, float p6, bool p7, int p8, gd::vector<int> const& p9, int p10, int p11);
public:

    /**
     * @note[short] MacOS: 0x2b95d0
     * @note[short] Android
     */
    TodoReturn colorExists(int p0);
    
private:
    [[deprecated("GJEffectManager::resumeTimer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resumeTimer(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::saveToState not implemented")]]
    /**
     * @note[short] Windows: 0x1dfe50
     * @note[short] Android
     */
    void saveToState(EffectManagerState& p0);
public:

    /**
     * @note[short] MacOS: 0x2b83f0
     * @note[short] Android
     */
    bool shouldBlend(int p0);
    
private:
    [[deprecated("GJEffectManager::spawnObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnObject(GameObject* p0, float p1, gd::vector<int> const& p2, int p3, int p4);
public:
    
private:
    [[deprecated("GJEffectManager::timeForItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn timeForItem(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::timerExists not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn timerExists(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::toggleGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleGroup(int p0, bool p1);
public:
    
private:
    [[deprecated("GJEffectManager::updateTimer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTimer(int p0, double p1);
public:
    
private:
    [[deprecated("GJEffectManager::countForItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn countForItem(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::playerButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerButton(bool p0, bool p1);
public:
    
private:
    [[deprecated("GJEffectManager::resetEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetEffects();
public:
    
private:
    [[deprecated("GJEffectManager::updateColors not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateColors(cocos2d::_ccColor3B p0, cocos2d::_ccColor3B p1);
public:
    
private:
    [[deprecated("GJEffectManager::updateTimers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTimers(float p0, float p1);
public:
    
private:
    [[deprecated("GJEffectManager::wasFollowing not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn wasFollowing(int p0, int p1);
public:
    
private:
    [[deprecated("GJEffectManager::colorForIndex not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorForIndex(int p0);
public:

    /**
     * @note[short] MacOS: 0x2c8600
     * @note[short] Android
     */
    void loadFromState(EffectManagerState& p0);

    /**
     * @note[short] MacOS: 0x2b8430
     * @note[short] Android
     */
    TodoReturn processColors();

    /**
     * @note[short] MacOS: 0x2b9630
     * @note[short] Android
     */
    TodoReturn updateEffects(float p0);
    
private:
    [[deprecated("GJEffectManager::addCountToItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addCountToItem(int p0, int p1);
public:
    
private:
    [[deprecated("GJEffectManager::checkCollision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkCollision(int const& p0, int const& p1);
public:
    
private:
    [[deprecated("GJEffectManager::colorForEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorForEffect(cocos2d::_ccColor3B p0, cocos2d::_ccHSVValue p1);
public:

    /**
     * @note[short] MacOS: 0x2c4610
     * @note[short] Android
     */
    bool isGroupEnabled(int p0);
    
private:
    [[deprecated("GJEffectManager::runPulseEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn runPulseEffect(int p0, bool p1, float p2, float p3, float p4, PulseEffectType p5, cocos2d::_ccColor3B p6, cocos2d::_ccHSVValue p7, int p8, bool p9, bool p10, bool p11, bool p12, int p13, int p14);
public:
    
private:
    [[deprecated("GJEffectManager::colorForGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorForGroupID(int p0, cocos2d::_ccColor3B const& p1, bool p2);
public:
    
private:
    [[deprecated("GJEffectManager::objectsCollided not implemented")]]
    /**
     * @note[short] Windows: 0x1d7fa0
     * @note[short] Android
     */
    TodoReturn objectsCollided(int p0, int p1);
public:
    
private:
    [[deprecated("GJEffectManager::opacityForIndex not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn opacityForIndex(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::postMoveActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn postMoveActions();
public:
    
private:
    [[deprecated("GJEffectManager::runCountTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn runCountTrigger(int p0, int p1, bool p2, int p3, bool p4, gd::vector<int> const& p5, int p6, int p7);
public:
    
private:
    [[deprecated("GJEffectManager::runDeathTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn runDeathTrigger(int p0, bool p1, gd::vector<int> const& p2, int p3, int p4);
public:
    
private:
    [[deprecated("GJEffectManager::runTimerTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn runTimerTrigger(int p0, double p1, bool p2, int p3, gd::vector<int> const& p4, int p5, int p6);
public:
    
private:
    [[deprecated("GJEffectManager::setupFromString not implemented")]]
    /**
     * @note[short] Android
     */
    void setupFromString(gd::string p0);
public:
    
private:
    [[deprecated("GJEffectManager::wouldCreateLoop not implemented")]]
    /**
     * @note[short] Windows: 0x1d7a30
     * @note[short] Android
     */
    TodoReturn wouldCreateLoop(InheritanceNode* p0, int p1);
public:

    /**
     * @note[short] MacOS: 0x2c45d0
     * @note[short] Android
     */
    bool hasBeenTriggered(int p0, int p1);
    
private:
    [[deprecated("GJEffectManager::resetMoveActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetMoveActions();
public:

    /**
     * @note[short] MacOS: 0x2c4420
     * @note[short] Android
     */
    void storeTriggeredID(int p0, int p1);
    
private:
    [[deprecated("GJEffectManager::createMoveCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createMoveCommand(cocos2d::CCPoint p0, int p1, float p2, int p3, float p4, bool p5, bool p6, bool p7, bool p8, float p9, float p10, int p11, int p12);
public:
    
private:
    [[deprecated("GJEffectManager::preCollisionCheck not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preCollisionCheck();
public:
    
private:
    [[deprecated("GJEffectManager::removeColorAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeColorAction(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::removeTriggeredID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeTriggeredID(int p0, int p1);
public:
    
private:
    [[deprecated("GJEffectManager::resetTriggeredIDs not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetTriggeredIDs();
public:
    
private:
    [[deprecated("GJEffectManager::saveCompletedMove not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn saveCompletedMove(int p0, double p1, double p2);
public:
    
private:
    [[deprecated("GJEffectManager::updateColorAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateColorAction(ColorAction* p0);
public:
    
private:
    [[deprecated("GJEffectManager::addMoveCalculation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addMoveCalculation(CCMoveCNode* p0, cocos2d::CCPoint p1, GameObject* p2);
public:
    
private:
    [[deprecated("GJEffectManager::colorActionChanged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorActionChanged(ColorAction* p0);
public:
    
private:
    [[deprecated("GJEffectManager::hasActiveDualTouch not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasActiveDualTouch();
public:
    
private:
    [[deprecated("GJEffectManager::keyForGroupIDColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn keyForGroupIDColor(int p0, cocos2d::_ccColor3B const& p1, bool p2);
public:
    
private:
    [[deprecated("GJEffectManager::opacityModForGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn opacityModForGroup(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::postCollisionCheck not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn postCollisionCheck();
public:
    
private:
    [[deprecated("GJEffectManager::prepareMoveActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn prepareMoveActions(float p0, bool p1);
public:
    
private:
    [[deprecated("GJEffectManager::resetToggledGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetToggledGroups();
public:
    
private:
    [[deprecated("GJEffectManager::updateColorEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateColorEffects(float p0);
public:
    
private:
    [[deprecated("GJEffectManager::updateCountForItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCountForItem(int p0, int p1);
public:
    
private:
    [[deprecated("GJEffectManager::updatePulseEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePulseEffects(float p0);
public:

    /**
     * @note[short] MacOS: 0x2b8260
     * @note[short] Windows: 0x1d7390
     * @note[short] Android
     */
    TodoReturn activeColorForIndex(int p0);
    
private:
    [[deprecated("GJEffectManager::colorForPulseEffect not implemented")]]
    /**
     * @note[short] Windows: 0x1ddbc0
     * @note[short] Android
     */
    TodoReturn colorForPulseEffect(cocos2d::_ccColor3B const& p0, PulseEffectAction* p1);
public:
    
private:
    [[deprecated("GJEffectManager::createFollowCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createFollowCommand(float p0, float p1, float p2, int p3, int p4, int p5, int p6);
public:
    
private:
    [[deprecated("GJEffectManager::createRotateCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createRotateCommand(float p0, float p1, int p2, int p3, int p4, float p5, bool p6, bool p7, bool p8, int p9, int p10);
public:
    
private:
    [[deprecated("GJEffectManager::processPulseActions not implemented")]]
    /**
     * @note[short] Windows: 0x1dd8e0
     * @note[short] Android
     */
    TodoReturn processPulseActions();
public:
    
private:
    [[deprecated("GJEffectManager::updateOpacityAction not implemented")]]
    /**
     * @note[short] Android
     */
    void updateOpacityAction(OpacityEffectAction* p0);
public:
    
private:
    [[deprecated("GJEffectManager::updateSpawnTriggers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSpawnTriggers(float p0);
public:
    
private:
    [[deprecated("GJEffectManager::toggleItemPersistent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleItemPersistent(int p0, bool p1);
public:
    
private:
    [[deprecated("GJEffectManager::updateOpacityEffects not implemented")]]
    /**
     * @note[short] Android
     */
    void updateOpacityEffects(float p0);
public:

    /**
     * @note[short] MacOS: 0x2b83c0
     * @note[short] Android
     */
    TodoReturn activeOpacityForIndex(int p0);

    /**
     * @note[short] MacOS: 0x2c74c0
     * @note[short] Windows: 0x1df6c0
     * @note[short] Android
     */
    TodoReturn calculateLightBGColor(cocos2d::_ccColor3B p0);
    
private:
    [[deprecated("GJEffectManager::createKeyframeCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createKeyframeCommand(int p0, cocos2d::CCArray* p1, GameObject* p2, int p3, int p4, bool p5, float p6, float p7, float p8, float p9, float p10, float p11, gd::vector<int> const& p12);
public:
    
private:
    [[deprecated("GJEffectManager::handleObjectCollision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn handleObjectCollision(bool p0, int p1, int p2);
public:
    
private:
    [[deprecated("GJEffectManager::removeAllPulseActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeAllPulseActions();
public:
    
private:
    [[deprecated("GJEffectManager::toggleTimerPersistent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleTimerPersistent(int p0, bool p1);
public:
    
private:
    [[deprecated("GJEffectManager::tryGetMoveCommandNode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryGetMoveCommandNode(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::createTransformCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createTransformCommand(double p0, double p1, double p2, double p3, bool p4, float p5, int p6, int p7, int p8, float p9, bool p10, bool p11, int p12, int p13);
public:

    /**
     * @note[short] MacOS: 0x2b8750
     * @note[short] Windows: 0x1d74e0
     * @note[short] Android
     */
    TodoReturn processInheritedColors();
    
private:
    [[deprecated("GJEffectManager::resetTempGroupCommands not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetTempGroupCommands(bool p0);
public:
    
private:
    [[deprecated("GJEffectManager::runTouchTriggerCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn runTouchTriggerCommand(int p0, bool p1, TouchTriggerType p2, TouchTriggerControl p3, bool p4, gd::vector<int> const& p5, int p6, int p7);
public:
    
private:
    [[deprecated("GJEffectManager::calculateInheritedColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn calculateInheritedColor(int p0, ColorAction* p1);
public:
    
private:
    [[deprecated("GJEffectManager::processMoveCalculations not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processMoveCalculations();
public:
    
private:
    [[deprecated("GJEffectManager::registerRotationCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn registerRotationCommand(GroupCommandObject2* p0, bool p1);
public:
    
private:
    [[deprecated("GJEffectManager::runOpacityActionOnGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn runOpacityActionOnGroup(int p0, float p1, float p2, int p3, int p4);
public:
    
private:
    [[deprecated("GJEffectManager::transferPersistentItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn transferPersistentItems();
public:
    
private:
    [[deprecated("GJEffectManager::controlActionsForTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlActionsForTrigger(EffectGameObject* p0, GJActionCommand p1);
public:
    
private:
    [[deprecated("GJEffectManager::hasPulseEffectForGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasPulseEffectForGroupID(int p0);
public:
    
private:
    [[deprecated("GJEffectManager::registerCollisionTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn registerCollisionTrigger(int p0, int p1, int p2, bool p3, bool p4, gd::vector<int> const& p5, int p6, int p7);
public:
    
private:
    [[deprecated("GJEffectManager::traverseInheritanceChain not implemented")]]
    /**
     * @note[short] Windows: 0x1d7730
     * @note[short] Android
     */
    TodoReturn traverseInheritanceChain(InheritanceNode* p0);
public:
    
private:
    [[deprecated("GJEffectManager::calculateBaseActiveColors not implemented")]]
    /**
     * @note[short] Windows: 0x1d7410
     * @note[short] Android
     */
    TodoReturn calculateBaseActiveColors();
public:
    
private:
    [[deprecated("GJEffectManager::createPlayerFollowCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createPlayerFollowCommand(float p0, float p1, int p2, float p3, float p4, int p5, int p6, int p7);
public:
    
private:
    [[deprecated("GJEffectManager::controlActionsForControlID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlActionsForControlID(int p0, GJActionCommand p1);
public:
    
private:
    [[deprecated("GJEffectManager::updateActiveOpacityEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateActiveOpacityEffects();
public:
    
private:
    [[deprecated("GJEffectManager::addAllInheritedColorActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addAllInheritedColorActions(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] MacOS: 0x2b8b00
     * @note[short] Windows: 0x1dd9a0
     * @note[short] Android
     */
    TodoReturn processCopyColorPulseActions();
    
private:
    [[deprecated("GJEffectManager::removePersistentFromAllItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removePersistentFromAllItems();
public:
    
private:
    [[deprecated("GJEffectManager::removePersistentFromAllTimers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removePersistentFromAllTimers();
public:

    /**
     * @note[short] MacOS: 0x2b7070
     * @note[short] Android
     */
    TodoReturn reset();

    /**
     * @note[short] MacOS: 0x2b6e10
     * @note[short] Windows: 0x1d6f50
     * @note[short] Android
     */
    virtual bool init();
    GEODE_PAD(240);
    cocos2d::CCDictionary* m_colorActionDict;
};
