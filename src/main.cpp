#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        auto gsm = GameStatsManager::sharedState();
        if (gsm) {

            gsm->setStat("6", gsm->getStat("6") + 1);
            
            gsm->setStat("28", gsm->getStat("28") + 1);

            gsm->setStat("14", gsm->getStat("14") + 67);
        }

        return true;
    }
};