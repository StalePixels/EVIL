/*
 * liblayer3 for Spectrum Next, by D. Rimron-Soutter
 *
 * BEGAN AS:   original libcuss © 2019 David Given
 * This library is distributable under the terms of the 2-clause BSD license.
 * See COPYING.cpmish in the distribution root directory for more information.
 *
 */
#include <stdio.h>
#include "liblayer3.h"

void l3_clear_to_eol(void)
{
    if (screeny >= SCREENHEIGHT)
            return;

    uint16_t i = SCREENWIDTH - screenx;
    if ((i != 0) && (screeny == (SCREENHEIGHT-1)))
        i--;

    while (i--) {
        tilemap[screeny][SCREENWIDTH-i-1].tile = ' ';
    }

    l3_goto(screenx, screeny);
}

