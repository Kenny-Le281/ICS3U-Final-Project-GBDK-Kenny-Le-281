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

    // from the loaded sprite sheet
    // load sprite index #15 (remember we start counting at 0!)
    // into position #0
    set_sprite_tile(0, 15);

    // move sprite indexed #0 to (88, 78)
    move_sprite(0, 88, 78);

    // load some more sprites
    set_sprite_tile(1, 5);
    set_sprite_tile(2, 10);

    // move them around
    move_sprite(1, 8, 144);
    move_sprite(2, 64, 64);

    SHOW_SPRITES;

    return 0;
}
