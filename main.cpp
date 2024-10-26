#include <nodepp/nodepp.h>
#include <nodepp/worker.h>

using namespace nodepp;

#include "assets/script/game.cpp"
#include "assets/scenes/scene_0.cpp"

void onMain() {

    rl::Init( 800, 600, 60, "Cursed Luna" );

    rl::AppendScene( rl::scene::scene_0 );

    rl::onClose([](){
        console::log("Closed");
        rl::Close();
    });

}