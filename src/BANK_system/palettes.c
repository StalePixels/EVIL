//
// Created by D Rimron-Soutter on 20/11/2020.
//

#include "palettes.h"

uint8_t SystemShadowTilemap[sizeof(tilemap)];
uint8_t SystemShadowTiles[sizeof(tiles)];
uint8_t SystemBackupULAPalette[512];
uint8_t SystemBackupTilemapPalette[512];

uint8_t SystemTilemapPalette[512] = {
	// FIRST EIGHT (32 vals)
		// DEFAULT TEXT COLOUR
		0x01, 0x01,     /* Default Blue */		0xFF, 0x01,		/* Bright White */
	    // DEFAULT STATUS BAR
		0xFF, 0x01,		/* Bright White */		0x01, 0x01,     /* Default Blue */
		0x01, 0x01,     /* Default Blue */		0xFF, 0x01,		/* Bright White */
		0x01, 0x01,     /* Default Blue */		0xFF, 0x01,		/* Bright White */
		0x01, 0x01,     /* Default Blue */		0xFF, 0x01,		/* Bright White */
		0x01, 0x01,     /* Default Blue */		0xFF, 0x01,		/* Bright White */
		0x01, 0x01,     /* Default Blue */		0xFF, 0x01,		/* Bright White */
		0x01, 0x01,     /* Default Blue */		0xFF, 0x01,		/* Bright White */
	// SECOND EIGHT (32 vals)
		0x00, 0x00,		/* Black */				0xFF, 0x01,     /* Bright White */
		0x00, 0x00,		/* Black */				0xFF, 0x01,     /* Bright White */
		0x00, 0x00,		/* Black */				0xFF, 0x01,     /* Bright White */
		0x00, 0x00,		/* Black */				0xFF, 0x01,     /* Bright White */
		0x00, 0x00,		/* Black */				0xFF, 0x01,     /* Bright White */
		0x00, 0x00,		/* Black */				0xFF, 0x01,     /* Bright White */
		0x00, 0x00,		/* Black */				0xFF, 0x01,     /* Bright White */
		0x00, 0x00,		/* Black */				0xFF, 0x01,     /* Bright White */
	// THIRD EIGHT (32 vals)
		0x01, 0x01,     /* Default Blue */		0xFF, 0x01,		/* Bright White */
		0x01, 0x01,     /* Default Blue */		0xFF, 0x01,		/* Bright White */
		0x01, 0x01,     /* Default Blue */		0xFF, 0x01,		/* Bright White */
		0x01, 0x01,     /* Default Blue */		0xFF, 0x01,		/* Bright White */
		0x01, 0x01,     /* Default Blue */		0xFF, 0x01,		/* Bright White */
		0x01, 0x01,     /* Default Blue */		0xFF, 0x01,		/* Bright White */
		0x01, 0x01,     /* Default Blue */		0xFF, 0x01,		/* Bright White */
		0x01, 0x01,     /* Default Blue */		0xFF, 0x01,		/* Bright White */
	// FOURTH EIGHT (32 vals)
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
	// FIFTH EIGHT (32 vals)
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
	// SIXTH EIGHT (32 vals)
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
	// SEVENTH EIGHT (32 vals)
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
	// EIGTHTH EIGHT (32 vals)
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
	// x9 EIGHT (32 vals)
	// 				DEFAULT_CURSOR_COLOUR
		0x1F, 0x01,     /* Bright Cyan */		0xFC, 0x00,     /* Bright Yellow */
		0x1F, 0x01,     /* Bright Cyan */		0xFC, 0x00,     /* Bright Yellow */
		0x1F, 0x01,     /* Bright Cyan */		0xFC, 0x00,     /* Bright Yellow */
		0x1F, 0x01,     /* Bright Cyan */		0xFC, 0x00,     /* Bright Yellow */
		0x1F, 0x01,     /* Bright Cyan */		0xFC, 0x00,     /* Bright Yellow */
		0x1F, 0x01,     /* Bright Cyan */		0xFC, 0x00,     /* Bright Yellow */
		0x1F, 0x01,     /* Bright Cyan */		0xFC, 0x00,     /* Bright Yellow */
		0x1F, 0x01,     /* Bright Cyan */		0xFC, 0x00,     /* Bright Yellow */
	// x10 EIGHT (32 vals)
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
	// x11 EIGHT (32 vals)
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
	// x12 EIGHT (32 vals)
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
	// x13 EIGHT (32 vals)
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
	// x14 EIGHT (32 vals)
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
	// x15 EIGHT (32 vals)
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
	// x16 EIGHT (32 vals)
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
		0xE0, 0x00,     /* Bright Red */		0xFF, 0x01,		/* Bright White */
};