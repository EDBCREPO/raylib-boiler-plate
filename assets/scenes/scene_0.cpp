#pragma once

namespace rl { namespace scene {

    void scene_0( ptr_t<Scene> self ) {

        self->onDraw([](){
            ClearBackground( Color({ 69, 2, 41, 255 }) );
	    DrawText( "Hello World", 30, 30, 13, WHITE );
        });

    }

}}