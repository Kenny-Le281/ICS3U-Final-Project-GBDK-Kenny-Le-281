// Copyright (c) 2023 Kenny Le All rights reserved
//
// Created by: Kenny Le
// Created on: May 2023
// This program is the Space Aliens game for the Gameboy

#include <gb/gb.h>
#include <stdio.h>

#include "MetaSprites.c"
#include "SpaceAliens.c"
#include "SpaceAliensBackgroundMap.c"

void main() {
    // load spritesheet reference
    set_sprite_data(0, 15, SpaceAliens);

    // load sprites for meta sprite
    set_meta_sprite_tile(0, 1, 2, 3, 4);

    // move meta sprite on screen
    move_meta_sprite(0, 76, 120);

    // set background tile sheet 0 to a different tile sheet
    // note we are leaving the first 38 tiles empty for fonts later on
    set_bkg_data(0, 16, SpaceAliens);

    // load tiles from (0, 0) to (20, 36) from the tile map called BackgroundMap
    set_bkg_tiles(0, 0, 20, 36, SpaceAliensBackgroundMap);

    SHOW_BKG;
    SHOW_SPRITES;
    DISPLAY_ON;

    // game loop
    while (1) {
        // scroll the background
        scroll_bkg(0, -1);

        // wait for VBlank (1/60th second)
        wait_vbl_done();
    }
}
