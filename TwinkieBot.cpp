#include "TwinkieBot.h"
using namespace BWAPI;

bool analyzed;
bool analysis_just_finished;
BWTA::Region* home;
BWTA::Region* enemy_base;

// Process necessary start items.
void TwinkieBot::onStart()
{
	Broodwar->sendText("Twinkie Bot reporting!");
}

// Unused functions.
void TwinkieBot::onEnd(bool isWinner) { }
void TwinkieBot::onFrame() { }
void TwinkieBot::onSendText(std::string text) { }
void TwinkieBot::onReceiveText(BWAPI::Player* player, std::string text) { }
void TwinkieBot::onPlayerLeft(BWAPI::Player* player) { }
void TwinkieBot::onNukeDetect(BWAPI::Position target) { }
void TwinkieBot::onUnitDiscover(BWAPI::Unit* unit) { }
void TwinkieBot::onUnitEvade(BWAPI::Unit* unit) { }
void TwinkieBot::onUnitShow(BWAPI::Unit *unit) { }
void TwinkieBot::onUnitHide(BWAPI::Unit *unit) { }
void TwinkieBot::onUnitCreate(BWAPI::Unit *unit) { }
void TwinkieBot::onUnitDestroy(BWAPI::Unit *unit) { }
void TwinkieBot::onUnitMorph(BWAPI::Unit *unit) { }
void TwinkieBot::onUnitRenegade(BWAPI::Unit *unit) { }
void TwinkieBot::onSaveGame(std::string gameName) { }
void TwinkieBot::onUnitComplete(BWAPI::Unit *unit) { }
