#include <nodepp/nodepp.h>
#include <raylib/game.h>

using namespace nodepp;

void onMain() {

    rl::Init( 800, 600, 60, "Cursed Luna" );

    rl::onDraw([](){
        rl::DrawRectangle( 10, 10, 10, 10, rl::RED );
    });

    rl::onClose([](){
        console::log("Closed");
        rl::Close();
    });

}