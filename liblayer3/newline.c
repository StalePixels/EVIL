/*
 * liblayer3 for Spectrum Next, by D. Rimron-Soutter
 *
 * BEGAN AS:   original libcuss © 2019 David Given
 * This library is distributable under the terms of the .
 * See COPYING.cpmish in the distribution root directory for more information.
 *
 */
#include "liblayer3.h"

void con_newline(void)
{
    if (screeny >= SCREENHEIGHT)
            return;

    screenx = 0;
    screeny++;
}
