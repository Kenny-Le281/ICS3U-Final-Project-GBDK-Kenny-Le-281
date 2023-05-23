// Copyright (c) 2023 Kenny Le All rights reserved
//
// Created by: Kenny Le
// Created on: May 2023
// This program is the Space Aliens game for the Gameboy

#include <gb/gb.h>
#include <stdio.h>

#include "SpaceAliens.c"

int main() {
    // load spritesheet referenced as #0
    // load 16 sprites from it
    // from variable SpaceAlien
    set_sprite_data(0, 16, SpaceAliens);

    // load sprites for meta sprite
    set_meta_sprite_tile(0, 1, 2, 3, 4);

    // move meta sprite on screen
    move_meta_sprite(0, 76, 120);

    SHOW_SPRITES;
    DISPLAY_ON;
}
