#ifndef GAMESTATEFIRSTTIME_H_DEFINED
#define GAMESTATEFIRSTTIME_H_DEFINED

#include <Engine/Flow/GameState.hpp>
#include <Game/Display/Layouts/LayoutFirstTime.hpp>
#include <Engine/Graphics/Widgets/Menu.hpp>

#include <string>

/// Will appear only when there's no Profile at the
/// configuration directory - probably the first time
/// the game's being run.
///
/// This asks for a Profile name and initializes
/// all configuration files for it.
///
class GameStateFirstTime: public GameState, EventHandler
{
  public:
    GameStateFirstTime();
    virtual ~GameStateFirstTime();

    void load();

    void unload();

    void update();

    void draw();

    bool handleEvent(sf::Event event) override;

  private:
    LayoutFirstTime* layout;
    std::string name;
};

#endif //GAMESTATEFIRSTTIME_H_DEFINED

